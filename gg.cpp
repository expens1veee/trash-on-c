#include <iostream>
#include <cmath>
#include <ostream>
#include <string>
#include <fstream>



using namespace std;
class Node {
public:
    Node* next;
    string title;
    string author;
    int year;
    string publish;
    int papers;
    Node(string t, string a, int y, string pc, int p) : title(t), author(a),year(y), publish(pc),papers(p), next(nullptr) {}
};

class LinkedList {
public:
    Node* head; // голова дай денег
    int size;

    LinkedList() {
        head = new Node("", "",0,"", 0);
        size = 0;
    }
// деструктор
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }

    // Добавление элемента в начало списка
    void insertAtFront(string t, string a, int y, string pc, int p) {
        Node* newNode = new Node(t,a,y,pc,p);
        newNode->next = head->next;
        head->next = newNode;
        
        // Увеличиваем размер списка, хранящийся в головном узле
        size++;
    }
    
    void insertAtEnd(string t, string a, int y, string pc, int p) {
        Node* newNode = new Node(t,a,y,pc,p);
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        size++;
    }
        string findbookbytitle(string title){
        Node* curr = head -> next;
        while (curr){
            if(curr -> title == title){
                return curr -> title;
            }
        curr = curr -> next;
        }
        return "none";
    }
    void print(){
        Node* curr = head -> next;
        while (curr){
            cout << "1. Название " << curr -> title << endl;
            cout << "2. Автор  " << curr -> author << endl;
            cout << "3. Год издания " << curr -> year << endl;
            cout <<  "4. Издательство " << curr -> publish << endl;
            cout  << "5. Количество страниц " << curr -> papers << endl;
            cout << endl;
            curr = curr -> next;
        }
    }

    
    void insertAfterI(string titles, string t, string a, int y, string pc, int p){
        Node* curr = head -> next;
        if (curr -> title == findbookbytitle(titles)){
            Node* newNode = new Node (t,a,y,pc,p);
            newNode -> next = curr -> next;
            curr -> next = newNode;
        }
        else{
            cout << "boor is not" << endl;
        }
    }


    void remove(string toremove) {
        Node* curr = head;
        if (head->next == nullptr) return; // Список пуст
        while(curr -> next){
        if (curr -> next -> title == toremove){
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
        size--;
        return;
        }
        else{
            curr = curr -> next;
            
        }
        }
        cout << "книга не найдена " << endl;
    }


        string findbookbyauthor(string author){
        Node* curr = head -> next;
        while (curr){
            if(curr -> author == author){
                return curr -> author;
            }
        curr = curr -> next;
        }
        return 0;
    }
    int findbyyear(int year){
    Node* curr = head -> next;
        while (curr){
            if(curr -> year == year){
                return curr -> year;
            }
        curr = curr -> next;
        }
        return 0;
    }

    void saveto (string filename){
        ofstream out;
        out.open(filename, ios::binary);
        Node* curr = head -> next;
        while (curr){
            out.write(reinterpret_cast<char*>(curr), sizeof(Node));
            curr = curr -> next;
        }
        out.close();

    }
    void loadfile(string filename){
        ifstream in(filename, ios::binary);
        if(!in){
            cerr << "file cant read))" << endl;
            return;
        }
        Node temp ("", "", 0, "", 0);
        while(in.read(((char*)(&temp)),sizeof(Node))){
            insertAtEnd(temp.title,temp.author,temp.year,temp.publish,temp.papers);
        }
        in.close();

    }

    void loadmiss (string filename){
        ifstream in(filename, ios::binary);
        if (!in){
            cerr <<"gg" << endl;
            return;
        }
        Node temp ("", "", 0, "", 0);
        while(in.read(reinterpret_cast<char*>(&temp),sizeof(Node))){
            if (findbookbytitle(temp.title) == "none"){
                insertAtEnd(temp.title,temp.author,temp.year,temp.publish,temp.papers);
            }
        }
        in.close();
    }

    int getsize(){
        return size;
    }
};


int main(){
    LinkedList list;
    list.loadfile("file100.txt");


}

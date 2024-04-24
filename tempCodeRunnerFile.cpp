#include <iostream>
#include <ostream>
#include <typeinfo>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
public:
    Node* head; // голова дай денег

    LinkedList() {
        head = new Node(0);
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
    void insertAtFront(int data) {
        Node* newNode = new Node(data);
        newNode->next = head->next;
        head->next = newNode;
        
        // Увеличиваем размер списка, хранящийся в головном узле
        head->data += 1;
    }
    
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        head->data += 1;
    }

    // Печать всех элементов списка (кроме головного узла)
    void printList() {
        Node* current = head->next; // Пропускаем головной узел
        int a = 0;
        while (current != nullptr) {

            cout << "номер: " << a << " " << "ключ: " << to_string(reinterpret_cast<uintptr_t>(current))  << " " << "значение: " << current->data << endl;
            // cout << &current << &current->next<<endl;
            current = current->next;
            a++;
        }
        cout << endl;
    }
    
    void removeFirst() {
        if (head->next == nullptr) return; // Список пуст
        Node* temp = head->next;
        head->next = temp->next;
        delete temp;
        head->data -= 1;
    }

    void removeLast() {
        if (head->next == nullptr) return; // Список пуст
        Node* current = head;
        while (current->next->next != nullptr) {
            current = current->next;
        }
        delete current->next;
        current->next = nullptr;
        head->data -= 1;
    }
   void insertAfterKey(int data, string key){
        Node* slow = head->next;
        Node* fast = head->next->next;
        if (to_string(reinterpret_cast<uintptr_t>(slow)) == key){
            Node* newNode = new Node(data);
            newNode->next = head->next;
            head->next = newNode;
            head->data++;
        }
        else{
            while (fast != nullptr && (to_string(reinterpret_cast<uintptr_t>(fast)) != key)){
                cout << to_string(reinterpret_cast<uintptr_t>(slow)) << endl;
                fast = fast->next;
                slow = slow->next;
            }
            if (fast == nullptr){
                cout << "Нет элемента с подходящим ключом" << endl;
            }else{
                Node *newNode = new Node(data);
                newNode->next = slow->next;
                slow->next = newNode;
                head->data++;
            }
        }
    }


    // reinterpret_cast<uintptr_t>(slow)
    void PrintAfterI(int i) {
        Node* current = head->next; // Пропускаем вспомогательный головной узел, содержащий размер
        int count = 0;
        
        while (current != nullptr) {
            if (count >= i) {
                cout << current->data << " ";
            }
            count++;
            current = current->next;
        }
        cout << endl;
    }
    void deleteAfterI(int i){
        Node* current = head -> next;

        int count = 0;
        while(current -> next != nullptr){
            if (count == i){
               Node* help = current -> next;
               current -> next = help -> next;
               delete help;
                head -> data -= 1;
                break;
            }
            else{
                current = current -> next;
                count++;
            }
        }
        
    if (current ->next == nullptr){
        cout << "нет элемента с заданным значением" << endl;
    }
    }
    // Получение размера списка
    int getSize() { 
        return head->data; // Размер списка хранится в головном узле
    }
};





int main(){
    LinkedList list;
    for ( ; ; ){
        cout << endl;
        cout << "введите пункт меню " << endl;
        cout << "1. создать список" << endl;
        cout << "2. количество элементов списка" << endl;
        cout << "3. вывод списка" << endl;
        cout << "4. вставка в начало списка" << endl;
        cout << "5. вставка в конец списка" << endl;
        cout << "6. исключение элемента из начала списка" << endl;
        cout << "7. исключение элемента из конца списка" << endl;
        cout << "8. Включить новый элемент перед элементом с заданным ключом.(Функция Данила)" << endl;
        cout << "9. принт афтер и (функция Влада)" << endl;
        cout << "10. Исключить элемент после i-го по номеру элемента.(функция Вадима)" << endl;
        cout << "11. АААААААА ДЕСТРОЙ ОЛЛ" << endl;
        int n;
        cout  << endl;
        cin >> n;
        cout  << endl;
        switch(n){
            case 1:{
            cout << "создали постой список" << endl;
             
            break;
            }
            case 2:{
                cout << list.getSize() << endl;
            break;
            }
            case 3:{
                list.printList();
            
                
            break;
            }
            case 4:{
            int a;
            cout << "введите число" << endl;
            cin >> a;
            list.insertAtFront(a);
            break;
            }
            case 5:
            {
            int a;
            cout << "введите число" << endl;
            cin >> a;
            list.insertAtEnd(a); 
            break;
            }
            case 6:{
            list.removeFirst();
            break;
            }
            case 7:{
            list.removeLast();
            break;
            }
            case 8:
            {
                int a;
                string n;
            cout << "введите число" << endl;
            cin >> a;
            cout << "введите ключ" << endl;
            cin >> n;
                list.insertAfterKey(a,n);
                break;
            }
            case 9:
            {
               int a;
            cout << "введите число" << endl;
            cin >> a;
            list.PrintAfterI(a);
            break;
            }

            case 10:{
            cout << "введите элемент" << endl;
            int a;
            cin >> a;
                list.deleteAfterI(a);
                break;
            }

            case 11:{
                exit(0);
            }
            
            
        }
    }
}
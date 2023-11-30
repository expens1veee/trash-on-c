#pragma once 
#include <iostream>
using namespace std;
namespace arr {
    void input(int *a, int n){
  cout << "введите элементы массива" << endl;
 for (int i = 0; i < n; i++) {
  cin >> a[i];
 }
}
void output(int *a, int n) {
 for (int i = 0; i < n; i++) {
  cout << a[i] << " ";
 }
}
void max(int *a, int n){
    int max = -100000000;
    for (int i = 0; i < n; i++){
        if (a[i] > max){
            max = a[i];
        }
    }
    cout << "максимальный элемнт" << max << endl;
}
void min(int *a, int n){
    int min = 10000000000;
    for (int i = 0; i < n; i++){
        if (a[i] < min){
            min = a[i];
        }
    }
    cout << "минимальный элемент" << min << endl;
}
void sort(int *a, int n){
        for (int i =0; i< n; i++){
            for (int j = 0; j< n ; j++){
                if (a[i]<a[j]){
                    int tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }
        cout <<"otsort" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
}
    cout << endl;
}
void border(int *a, int n){
     int N, count = 0;
cout << "введите заданное значение" <<endl;
cin >> N;
int b[n];
int c[n];
for (int i = 0; i < n; i++){
  if (a[i] > N ){
    b[count] = a[i];
    c[count] = i;
    count++;
  }
}
cout << "числа" << endl;
for (int i = 0; i < count; i++){
  cout << b[i] << " ";
}
cout << endl;

}
void zero(int *a, int n){
    for (int i = 0; i < n; i++){
        if (a[i] < 0) {
            a[i] = 0;
        }
    }
    cout << "zam" << endl;
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void p_and_m(int *a, int n){
    int p = 0;
    int m = 1;
    for (int i = 0; i < n; i++){
        p+=a[i];
        m*=a[i];
    }
    cout << "plus" << " " << p << endl;
    cout << "multiply" << " " << m << endl;
}
int prost(int n){
for (int i = 1; i < pow(n,0.5)+1; i++){
    int count = 0;
    if (n % i == 0){
        count +=1;
    }
    if (count <= 2){
        return 2;
    }
    else{
        return 0;
    }
}
}
void prostoe(int *a, int n){
    cout <<"prost" << endl;
for (int i = 0; i < n; i++){
    if (prost(a[i]) == 2){
        cout << a[i] << " ";
    }
}
cout << endl;
}
}

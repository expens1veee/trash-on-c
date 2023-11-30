#include <iostream>
using namespace std;
int sum(int *A, int N){
    int S = 0;
    for (int i = 0; i < N; i++)
        S += A[i];
    return S;
}
void input(int *A, int N){
  cout << "введите элементы массива" << endl;
 for (int i = 0; i < N; i++) {
  cin >> A[i];
 }
}
void output(int *A, int N) {
 for (int i = 0; i < N; i++) {
  cout << A[i] << " ";
 }
}

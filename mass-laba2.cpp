#include <iostream>
#include <limits.h>
using namespace std;
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

// void input(int *a, int n){
//   cout << "введите элементы массива" << endl;
//  for (int i = 0; i < n; i++) {
//   cin >> a[i];
//  }
// }
// void output(int *a, int n) {
//  for (int i = 0; i < n; i++) {
//   cout << a[i] << " ";
//  }
// }

// int main() {
//  int *A, N;
//  setlocale(LC_ALL, "russian");
//   cout << "введите количество элементов массива" << endl;
//   cin >> N;
//   A = new int[N];
//   input(A, N);

// // 1.	Поменять местами максимальный и минимальный элементы массива. Вывести измененный массив на экран.
//   int max = INT_MIN , min = INT_MAX;
//   for (int i = 0; i < N; i++) {
//    if (A[i] > max) {
//     max = A[i];
//    }
//    if (A[i] < min){
//     min = A[i];
//    }
//   }
//   for (int i = 0; i < N; i++) {
//    if (A[i] == min) {
//     A[i] = max;
//    }
//    else if  (A[i] == max) {
//     A[i] = min;
//    }
//   }

// // // 2.	Все элементы массива, меньшие заданного значения, и их номера записать в два новых массива (в один значения в другой номера). 
// // Вывести новые массивы на экран. Заданное значение вводится с клавиатуры.
// int n, count = 0;
// cout << "введите заданное значение" <<endl;
// cin >> n;
// int b[N];
// int c[N];
// for (int i = 0; i < N; i++){
//   if (A[i]< n ){
//     b[count] = A[i];
//     c[count] = i;
//     count++;
//   }
// }
// cout << "числа" << endl;
// for (int i = 0; i < count; i++){
//   cout << b[i] << " ";
// }
// cout << endl;
// cout << "индексы" << endl;
// for (int i = 0; i < count; i++){
//   cout << c[i] << " ";
// }


// // 3.	Вводится дополнительный массив разрешенных значений. Определить и вывести на экран, сколько элементов исходного массива имеют разрешенные значения.

// cout << "введите дополниетльный массив разрешенных значений" << endl;
// int *B, n1, count = 0;
// cout << "введите количество элементов массива" << endl;
// cin >> n1;
// B = new int [n1];
// input(B, n1);
// for (int i = 0; i < N; i++){
//     for (int j = 0; j < n1; j++){
//       if (A[i] == B[j]){
//         count++;
//       }
//     }
    
// }
//   cout << "количество разрешенных элементов" <<  endl;
//   cout << count << endl;
//   delete [] B;
  
// // 4.	Составить и вывести на экран массив из различных (по значению) элементов исходного массива.
//       int c[N];
//       int b[N];
//       int g;
//       int count = 0;
//       int count1 = 0;
//       for (int i = 0; i < N; i++){
//         if (A[i] > 0){
//           b[count] = A[i];
//           count++;
//         }
//         else if (A[i] < 0){
//           c[count1] = A[i];
//           count1++;
//         }
//         else{
//           g++;
//         }
//       }
//       cout << "положительные" << endl;
//       for (int i = 0; i < count; i++){
//         cout << b[i] << " ";
//       }
//       cout << endl;
//       cout << "отрицательные" << endl;
//       for (int i = 0; i < count1; i++){
//         cout << c[i] << " ";
//       }
//       cout << endl;
//       if (g > 0){
//         cout << "ноль" << " " << "0"<< endl;
//       }

//     // 5.	Составить и вывести на экран два массива: массив повторяющихся элементов исходного массива и массив их частот.
// int* repeatedElements = new int[N];
//     int* frequencies = new int[N];
//     int repeatedCount = 0;

//     for (int i = 0; i < N; i++) {
//         bool isRepeated = false;
//         for (int j = 0; j < repeatedCount; j++) {
//             if (A[i] == repeatedElements[j]) {
//                 isRepeated = true;
//                 frequencies[j]++;
//                 break;
//             }
//         }
//         if (!isRepeated) {
//             repeatedElements[repeatedCount] = A[i];
//             frequencies[repeatedCount] = 1;
//             repeatedCount++;
//         }
//     }
   
        
      

   

// // for (int i = 0; i < repeatedCount; i++){
// //   cout << repeatedElements[i] << " ";
// // }
// // cout << endl;
// // for (int i = 0; i < repeatedCount; i++){
// //   cout << frequencies[i] << " ";
// // }

  

// output(A,N);
//   delete[] A;
//   return 0;

// }


void input(int **a, int n, int m){
    cout << "введите элементы массива" << endl;
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        cin >> a[i][j];
    }

        
  }
}
void output(int **a, int n, int m){
    for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        cout << a[i][j] << " ";
}
    cout << endl;
    }
}

int main(){
    int n,m,*a;
    cout << "введите количество строк массива" << endl;
     cin >> n;
    cout << "введите количество столбцов массива" << endl;

    cin >> m;
    int **arr = new int*[n];
    for (int i = 0; i < m; i++){
        arr[i] = new int[m];
    }
    input(arr,n,m);
//     // 1.	число неотрицательных элементов в i-ой строке.
//     cout << "введите i строку" << endl;
//     int strk;
//     int mass[m];
//     int count = 0;
//     cin >> strk;
//     for (int j = 0; j < m; j++){
//         if (arr[strk][j] >= 0){
//             mass[count] = arr[strk][j];
//             count+=1;
//         }
//     }
// for (int i = 0; i < count; i++){
//     cout << mass[i] << " ";
// }


// // // 2.	среднее арифметическое положительных элементов в i-ом столбце. 
//     cout << "введите i строку" << endl;
//     int strk;
//     // int mass[m];
//     int count = 0;
//     int count1 = 1;
//     cin >> strk;
//     for (int j = 0; j < m; j++){
//         if (arr[strk][j] >= 0){
//             count+=1;
//             count1 += arr[strk][j];
//         }
//     }
// cout << "sr = " << count1 / count << endl;

// // 3.	минимальное значение в i-ой строке.

    int strk;
    // int mass[m];
    int count = 0;
    int count1 = 1;
    int min = 100000000;
    int mass[m];
for (int strk = 0; strk < n; strk++){
    for (int i = 0; i < m; i++){
        if (arr[strk][i] < min ){
            min = arr[strk][i];
        }
        
    }
    mass[count] = min;
    count++;
}
cout << " минимальные числа в i строке" << endl;
for (int i = 0; i < count; i++){
    cout << mass[i] << endl;
}



// 4.	номер максимального значения в i-ой строке.

    int strk;
    int mass[m];
    int count = 0;
    int count1 = 1;
    int max = -100000000;
for (int strk = 0; strk < n; strk++){
    for (int i = 0; i < m; i++){
        if (arr[strk][i] > max ){
            max = arr[strk][i];
        }
    }
    mass[count] = max;
    count++;
}
cout << " максимальное число в i строке" << endl;
for (int i = 0; i < count; i++){
    cout << mass[i] << endl;
}



// 5.	количество простых чисел в i-ой строке.

    int strk;
    int mass[m];
    int count = 0;
    int count1 = 0;
    
for (strk = 0;strk < n; strk++){
    for (int i = 0; i < m; i++){
        int a;
        a = prost(arr[strk][i]);
        if(a == 2){
            count+=1;
        }

    }
    
    mass[count1] = count;
    count =0;
    count1++;

}
cout << "количество простых чисел в i строке" << endl;
for (int i = 0; i < count1; i++){
    cout << mass[i] << endl;
}



    // output(arr,n,m);
    for (int i=0; i<n; i++){
        delete [] arr[i];
    }
delete [] arr;
}
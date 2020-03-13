/*
Write a program with following functionality.

Implement following four functions:
void RemoveOdd(int *e);
void RemoveEven(int *e);
void RemoveNegative(int *e);
void RemovePositive(int *e);
The functions will accept the integer and will change it to 0 if, the number is Odd/Even/Negative/Positive.

Also implement the following function
void ProcessArray(int *p, int n, void (*pfn)(int *));
The function will process all elements of the array and for each element, will invoke the function whose address has been passed as an argument.

The program will accept N numbers from user and display a menu, asking user what type (odd/even/positive/negative) of elements he wants to replace in array. Then call ProcessArray by passing the user supplied numbers and appropriate function address.
Display the processed array elements, after ProcessArray function is over.
   
*/

#include<iostream>

using namespace std;

void RemoveOdd(int * e) {

  if ( * e % 2 == 1) {
    * e = 0;
  }

}

void RemoveEven(int * e) {
  if ( * e % 2 == 0) {
    * e = 0;
  }

}

void RemoveNegative(int * e) {

  if ( * e < 0) {
    * e = 0;
  }

}

void RemovePositive(int * e) {

  if ( * e > 0) {
    * e = 0;
  }

}

void ProcessArray(int * p, int n, void( * pfn)(int * )) {

  for (int i = 0; i < n; i++) {
    pfn(p + i);
  }

  for (int i = 0; i < n; i++) {
    cout << p[i]<<endl;
  }

}

int main() {
  int size;
  cout << "Enter the size of the array : \n";
  cin >> size;

  int arr[size];

  cout << "Enter elements of array : \n";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int choice;

  while(true){
    cout << "Enter the choice : \n";

  cout << "\n1 for REMOVE ODD \n2 for REMOVE EVEN \n3 for REMOVE Positive \n4 for Remove Negitive \n5 to exit\n";
  cin >> choice;
  if (choice == 5)
    return 0;  

  void( * pfn[4])(int * ) = {
    RemoveOdd,
    RemoveEven,
    RemovePositive,
    RemoveNegative
  };
  ProcessArray(arr, size, pfn[choice - 1]);
  }
  

  

}
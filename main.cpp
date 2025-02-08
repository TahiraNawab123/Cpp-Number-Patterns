#include<iostream>
#include"function.h"
using namespace std;

int main(){
  // task 1
  int num;
  cout<<"\n=======================Task 1====================="<<endl;
      cout<<"\nPlease Enter an integer number: ";
      cin>>num;
  printNumbers(num);

  // task 2
  int num1;
  cout<<"\n=======================Task 2====================="<<endl;
        cout<<"\nPlease Enter an integer number: ";
        cin>>num1;
  sumNumbers(num1);

  // task 3
  int num2;
  cout<<"\n=======================Task 3====================="<<endl;
         cout<<"\nPlease Enter an integer value whose table you want to print: ";
         cin>>num2;
  printMultiples(num2);

  // task 4
  int heightOfTriangle;
  cout<<"\n=======================Task 4====================="<<endl;
          cout<<"\nPlease enter height of the number of the triangle: ";
          cin>>heightOfTriangle;
  printNumberTriangle(heightOfTriangle);
  cout<<"\n=================================================="<<endl;
  return 0;
  }
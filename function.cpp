#include<iostream>
#include <iomanip>
#include"function.h"
using namespace std;

// task 1
void printNumbers(int n){
   for( int i = 1; i<= n; i++){
     cout<<""<<i<<endl;
     }
  }

// task 2
void sumNumbers(int a){
  int sum =0;
  for(int i =1; i<= a; i++){
    sum += i;
    }
    cout<<"Sum of all the numbers from "<< 1 <<" to "<<a <<": "<< sum<<endl;
  }

// task 3
void printMultiples(int x){
  for (int i =1; i<= 10; i++){
    cout<<"" << x << " x "<< i<< " = "<< "" << i*x<<endl;
    }
  }

// task 4
void printNumberTriangle(int height){
  for(int i = 1; i<= height; i++){
    for(int j = 1; j <= i; j++){
      cout<< j<<" ";
      }cout<<endl;
    }
  }
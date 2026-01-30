#include<iostream>
using namespace std;

int main(){
  //1. const varable
  // const int x = 10;
  // cout<<x<<endl;
  // x = 11;
  // cout<<x<<endl;
  // return 0;

  //2. const variabele with pointers

  int *a = new int;
  *a = 2;
  cout<<*a<<endl;
  delete(a);

  int b = 5;
  a = &b;
  cout<<*a<<endl;
  return 0;
}
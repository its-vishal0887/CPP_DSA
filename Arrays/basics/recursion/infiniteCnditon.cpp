#include<iostream>
using namespace std;

void printName(){
  int num = 1;
  cout<<"Vishal"<<++num<<endl;
  printName();
}

int main(){
  printName();
}
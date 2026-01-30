#include<iostream>
using namespace std;

void printNameNtimes(int n){
  if(n>100){
    return;
  }
  cout<<"Vishal"<< n <<endl;
  printNameNtimes(n+1);
}

int main(){
  int n;
  cout<<"Enter How Many times Name you wanna Print?->";
  cin>>n;
  printNameNtimes(n);
}
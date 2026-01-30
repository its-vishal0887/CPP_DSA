#include<iostream>
using namespace std;

int main(){
  int i = 1;
  // int *ptr = &i;
  // (*ptr)++;
  // cout<<*ptr<<" ";
  
  int *p = &i;
  // int a = *p;
  (*p)++;

  int *q = p;
  cout<<*q<<" ";

  (*q)++;
  // int num = i;
  // num++;

  cout<<*p;
}
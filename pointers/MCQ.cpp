#include<bits/stdc++.h>
using namespace std;

int main(){
  // int f1 = 8;
  // int f2 = 18;
  // int *ptr = &f2;
  // *ptr = 9;
  // cout<<f1<<" "<<f2<<endl;

  // int f1 = 6;
  // int *p = &f1;
  // int *q = p;
  // (*q)++;
  // cout<<f1<<endl;

  // int f1 = 8;
  // int *p = &f1;
  // cout<<(*p)++<<" ";
  // cout<<f1;

  // int *p = 0;
  // int f1 = 110;
  // *p = f1;
  // cout<<*p<<endl;

  // int f1 = 8;
  // int se = 11;
  // int *th = &se;
  // f1 = *th;
  // *th = *th + 2;
  // cout<<f1<<" "<<se<<endl;

  float f = 12.5;
  float p = 21.5;
  float *ptr = &f;
  (*ptr)++;
  *ptr = p;
  cout<<*ptr<<" "<<f<<" "<<p<<endl;

}
#include<bits/stdc++.h>
using namespace std;

int num(int n){
  return n;
}

void mul(int n){
  if(n > 10){
    return;
  }
  cout<<n <<"*"<<num(n)<<"->"<<n*num(n)<<endl;
  mul(n+1);
}

int main(){
  int n = 1;
  mul(n);
}
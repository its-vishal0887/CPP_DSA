#include<bits/stdc++.h>
using namespace std;

int fibb(int n){
  if(n == 1 || n == 0){
    return n;
  }
  return fibb(n - 1) + fibb(n - 2);
}

int main(){
  int num = fibb(4);
  cout<<num<<endl;
}
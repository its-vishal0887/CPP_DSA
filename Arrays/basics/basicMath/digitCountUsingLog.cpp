#include<bits/stdc++.h>
using namespace std;

int digitCount(int n){
  int cnt = (int)(log10(n)+ 1);
  return cnt;
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;
  int val = digitCount(n);
  cout<<val<<endl;
  return 0;
}
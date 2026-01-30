#include<bits/stdc++.h>
using namespace std;

int sumOfNum(int n){
  if(n < 1){
    return 0;
  }
  return n + sumOfNum(n - 1);
}

int main(){
  int sum = sumOfNum(10);
  cout<<sum<<endl;
}
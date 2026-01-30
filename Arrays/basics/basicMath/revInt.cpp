#include<bits/stdc++.h>
using namespace std;

void revInt(int n){
  int rev = 0;
  while(n > 0){
    int lastDigit = n % 10;
    rev = (rev * 10) + lastDigit;
    n = n/10;
  }
  cout<<rev<<endl;
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;
  revInt(n);
  return 0;
}
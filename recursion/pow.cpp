#include<bits/stdc++.h>
using namespace std;

long double pow(double x,int n){
  if(n < 1){
    return 1;
  }
  //Negative handling
  // if(n < 0){
  //   return 1/pow(x,-n);
  // }
  return x * pow(x, n-1);
}

int main(){
  int n = -2;
  long double x = 2.00000;
  long double p = pow(x,n);
  cout<<p<<endl;
}
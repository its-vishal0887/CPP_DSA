#include<iostream>
using namespace std;

int factorial(int n){
  if(n == 0){
    return 1;
  }

  int fact = n * factorial(n-1);
  return fact;
}

int main(){
  int num;
  cout<<"Enter Num:";
  cin>>num;

  int ans = factorial(num);
  cout<<ans;

  return 0;
}
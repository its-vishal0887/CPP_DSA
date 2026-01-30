#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool armstrongNum(int num){
  int max = num;
  int sum = 0;
  while(num != 0){
    int lastDigit = num % 10;
    sum = sum + pow(lastDigit, 3);
    num = num / 10;
  }
  return max == sum;
}

int main(){
  int num;
  cout<<"Enter NUM:";
  cin>>num;
  int armstrong = armstrongNum(num);
  if(armstrong){
    cout<<"Given number is an Armstrong number";
  }else{
    cout<<"Given number is not an Armstrong number";
  }
  return 0;
}
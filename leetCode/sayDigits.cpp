#include<bits/stdc++.h>
using namespace std;

void say(int digit,string arr[]){
  if(digit == 0){
    return;
  }

  int num = digit % 10;
  digit = digit / 10;

  

  say(digit, arr);
  
  cout<<arr[num]<<" ";

}

int main(){
  string arr[10]{
    "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"
  };
  say(412, arr);

}
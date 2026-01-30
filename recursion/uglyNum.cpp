#include<iostream>
using namespace std;

bool uglyNum(int num){
  cout<<"Enter Num: "<<endl;
  cin>>num;
  while(num > 1){
    if(num % 2 == 0){
      num = num / 2;
    }
    else if(num % 3 == 0){
      num = num / 3;
    }
    else if(num % 5 == 0){
      num = num / 5;
    }
    else{
      return 0;
    }
  }
  if(num == 1) return 1;
  return 0;
}

int main(){
  int n;
  bool num = uglyNum(n);
  cout<<num<<endl;
}
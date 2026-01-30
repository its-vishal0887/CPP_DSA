#include<bits/stdc++.h>
using namespace std;

void newDig(int &num){
  if(num == 0){
    return;
  }

  int snum = num % 10;
  num = num / 10;
  cout<<snum;
  newDig(num);
  
}

int main(){
  int num = 2546;
  newDig(num);
  return 0;
}
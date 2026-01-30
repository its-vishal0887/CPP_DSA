#include<iostream>
using namespace std;

//from 1 to N

// void printNum(int n){
//   if(n>100){
//     return;
//   }
//   cout<< n <<" ";
//   printNum(n+1);
// }

//from N to 1

void printNum(int n, int i){
  cout<< n <<" ";
  if(n<=i){
    return;
  }
  printNum(n-1, i);
}

int main(){

  printNum(100, 1);
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n){
  if(n <= 1){
    return 1;
  }
  
  // int curr = 1;
  // int prev = 1;

  // for(int i = 2; i<=n; i++){
  //   int next = prev + curr;
  //   prev = curr;
  //   curr = next;
  // }
  // return curr;
  return climbStairs(n-1)+climbStairs(n-2);
}

int main(){
  int n = 5;
  int stairs = climbStairs(n);
  cout<<stairs;
}
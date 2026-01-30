#include<bits/stdc++.h>
using namespace std;

// int findNCR(int n, int r){
//   int res = 1;
//   cout<<res<<" ";
//   for(int i = 0; i<r; i++){
//     res = res * (n-i);
//     res = res/(i+1);
//     cout<<res<<" ";
//   }
//   return res;
// }

void printRow(int n){
  int ans  = 1;
  cout<<ans<<" ";
  
  for(int i = 0; i<n; i++){
    ans = ans * (n - i);
    ans = ans/(i+1);
    cout<<ans<<" ";
  }
}

int main(){
  printRow(3);
}
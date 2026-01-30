#include<bits/stdc++.h>
using namespace std;

void sameNUMleftTriangle(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;
  sameNUMleftTriangle(n);
  return 0;
}
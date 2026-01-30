#include<bits/stdc++.h>
using namespace std;

void ultanumwalaTriangel(int n){
  for(int i = n; i>0; i--){
    for(int j = 1; j<i; j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;
  ultanumwalaTriangel(n);
  return 0;
}
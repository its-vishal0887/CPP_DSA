#include<iostream>
using namespace std;

void triangle(int n){
  for(int i = 0; i<n; i++){
    for(int j = 0; j<i; j++){
      cout<<" * ";
    }
    cout<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;
  triangle(n);
}
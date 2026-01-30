#include<bits/stdc++.h>
using namespace std;

void occrace(int *arr, int size, int idx, int tgt){
  if(idx >= size){
    return;
  }

  if(arr[idx] == tgt){
    cout<<idx<<endl;
  }

  occrace(arr, size, idx+1, tgt);
}

int main(){
  int arr[] = {2,1,0,2,3,2};
  int size = sizeof(arr)/sizeof(int);
  int tgt = 2;
  occrace(arr, size, 0, tgt);
}
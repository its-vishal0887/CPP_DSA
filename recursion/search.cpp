#include<bits/stdc++.h>
using namespace std;

int linear_search(int *arr, int size, int tgt, int idx){

  if(idx >= size){
    return 0;
  }

  if(arr[idx] == tgt){
    return 1;
  }
  int search = linear_search(arr, size, tgt, idx+1);

  return search;
}

int main(){
  int arr[] = {10,20,30,40};
  int size = sizeof(arr)/sizeof(int);
  int search = linear_search(arr, size, 30, 0);
  cout<<search<<endl;
  return 0;
}

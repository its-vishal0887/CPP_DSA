#include<bits/stdc++.h>
using namespace std;

void doubleArr(int *arr,int idx, int size, int increment){
  if(idx>size){
    return;
  }

  arr[idx] = arr[idx] * increment;

  doubleArr(arr, idx+1, size, increment);
}

int main(){
  int arr[] = {10,20,30,40};
  int size = sizeof(arr)/sizeof(int);
  doubleArr(arr, 0, size, 2);
  for(int i: arr){
    cout<<i<<" ";
  }
  return 0;
}
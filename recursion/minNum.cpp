#include<bits/stdc++.h>
using namespace std;

int minNum(int *arr, int size, int idx, int &maxi){
  
  if(idx > size){
    return maxi;
  }
  if(arr[idx] < maxi){
    maxi = arr[idx];
  }
  return minNum(arr, size, idx+1, maxi);
}

int main(){
  int arr[] = {10,4,2,0,4};
  int size = sizeof(arr)/sizeof(int);
  int idx = 0;
  int maxi = INT_MAX;
  int num = minNum(arr, size, idx, maxi);
  cout<<num<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

void rightRotation(vector<int>&arr, int k){
  if(k < 1){
    return;
  }
  int n = arr.size();
  k%n;
  // if(k == 0){
  //   return;
  // }
  int temp = arr[n-1];
  for(int i = n-2; i>=0; i--){
    arr[i+1] = arr[i];
  }
  arr[0] = temp;
  rightRotation(arr,k-1);
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {1,2,3,4,5,6,7};
  rightRotation(arr,4 );
  display(arr);
  return 0;
}
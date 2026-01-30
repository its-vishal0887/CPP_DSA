#include<bits/stdc++.h>
using namespace std;

void left_rotate(vector<int>&arr, int k){
  if(k < 1){
    return;
  }
  int temp = arr[0];
  for(int i = 1; i<arr.size(); i++){
    arr[i-1] = arr[i];
  }
  arr[arr.size()-1] = temp;
  left_rotate(arr, k-1);
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {1,2,3,4,5};
  left_rotate(arr, 3);
  display(arr);
  return 0;
}
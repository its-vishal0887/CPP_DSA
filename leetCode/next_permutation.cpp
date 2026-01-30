#include<bits/stdc++.h>
using namespace std;

void nextpermutation(vector<int>&arr){
  // next_permutation(arr.begin(), arr.end());
  // return;
  int idx = -1;
  int n = arr.size();
  for(int i = n-2; i>=0; i--){
    if(arr[i]<arr[i+1]){
      idx = i;
      break;
    }
  }
  for(int i = arr.size()-1; i >= idx; i++){
    if(arr[i] > arr[idx]){
      swap(arr[i], arr[idx]);
      break;
    }
  }
  if(idx == -1){
    reverse(arr.begin(), arr.end());
    return;
  }
  reverse(arr.begin()+idx+1, arr.end());
}

void display(vector<int>&arr){
  for(int i = 0 ; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {1,2,3,6,5,4};
  nextpermutation(arr);
  display(arr);
}
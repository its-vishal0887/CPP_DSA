#include<bits/stdc++.h>
using namespace std;

int removeElement(vector<int>&arr, int val){
  int i = 0;
  int j = 0;
  while(j<arr.size()){
    if(arr[j] != val){
      swap(arr[i], arr[j]);
      i++;
    }
    j++;
  }
  return i;
}

void display(vector<int>&arr, int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {3,2,2,3};
  int newSize = removeElement(arr, 2);
  display(arr, newSize);
}
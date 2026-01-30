#include<iostream>
#include<vector>
using namespace std;

void recursive_insertionSort(vector<int>&arr, int i, int n){
  if(i == n){
    return;
  }
  int j = i;
  while(j > 0 && arr[j-1]>arr[j]){
    swap(arr[j-1], arr[j]);
    j--;
  }

  recursive_insertionSort(arr, i+1, n);
}

void dislay(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {4,6,2,3,9,17};
  recursive_insertionSort(arr, 0, arr.size()-1);
  dislay(arr);
}
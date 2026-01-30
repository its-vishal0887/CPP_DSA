#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int start,int end){
  int mid = start + (end - start)/2;
  int len1 = mid - start + 1;
  int len2 = end - mid;

  int *first = new int[len1];
  int *second = new int[len2];

  int mainArrayIdx = start;
  for(int i = 0; i<len1; i++){
    first[i] = arr[mainArrayIdx++];
  }

  for(int i = 0; i<len2; i++){
    second[i] = arr[mainArrayIdx++];
  }

  int idx1 = 0;
  int idx2 = 0;
  mainArrayIdx = start;

  while(idx1 < len1 && idx2 < len2){
    if(first[idx1] < second[idx2]){
      arr[mainArrayIdx++] = first[idx1++];
    }
    else{
      arr[mainArrayIdx++] = second[idx2++];
    }
  }
  while(idx1 < len1){
    arr[mainArrayIdx++] = first[idx1++];
  }
  while(idx2 < len2){
    arr[mainArrayIdx++] = second[idx2++];
  }
}

void mergeSort(int *arr, int start, int end){
  if(start >= end){
    return;
  }

  int mid = start + (end - start)/2;

  mergeSort(arr, start, mid);

  mergeSort(arr, mid + 1, end);

  merge(arr, start, end);
}

void display(int arr[], int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}


int main(){
  int arr[5] = {2,5,1,6,9};
  int n = 5;
  mergeSort(arr, 0, n-1);
  display(arr, n);
  return 0;
}
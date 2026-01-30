#include<iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
  int i = l;
  int j = mid+1;
  int k  = l;
  int arr_2[100];

  while(i<=mid && j<=h){
    if(arr[i]<=arr[j]){
      arr_2[k] = arr[i];
      i++;
    }else{
      arr_2[k] = arr[j];
      j++;
    }
    k++;
  }
  if(i>mid){
    while(j<=h){
      arr_2[k] = arr[j];
      j++;
      k++;
    }
  }
  if(j>h){
    while(i<=mid){
      arr_2[k] = arr[i];
      i++;
      k++;
    }
  }
  for(k = l; k<=h; k++){
    arr[k] = arr_2[k];
  }
}
void merge_sort(int arr[], int l, int h){
  if(l>=h){
    return;
  }
  int mid = l + (h-l)/2;
  merge_sort(arr,l, mid);
  merge_sort(arr, mid+1, h);
  merge(arr, l, mid, h);
}
void display(int arr[], int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[] = {3,1,2,4,1,5,6,2,4};
  int size = sizeof(arr)/sizeof(int);
  merge_sort(arr, 0, size-1);
  display(arr, size);
  
}
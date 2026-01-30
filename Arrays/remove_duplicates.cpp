#include<bits/stdc++.h>
using namespace std;

int remove_dupli(int arr[], int size){
  int i = 0;
  int j = 1;
  for(int j = 0; j<size; j++){
    if(arr[j] != arr[i]){
      arr[i+1] = arr[j];
      i++;
    }
  }
  return i+1;
}
void display(int arr[], int size){
  for(int i = 0; i<size; i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  int arr[] = {1,1,2,2,2,3,3};
  int size = sizeof(arr)/sizeof(int);
  int new_arr = remove_dupli(arr, size);
  display(arr, new_arr);
}
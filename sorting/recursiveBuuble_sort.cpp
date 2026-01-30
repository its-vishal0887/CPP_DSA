#include<iostream>
#include<vector>
using namespace std;

void recursive_bubbleSort(vector<int>&arr, int size){
  if(size == 1){
    return;
  }
  for(int i = 0; i<=size-2; i++){
    if(arr[i] > arr[i+1]){
      swap(arr[i], arr[i+1]);
    }
  }
  recursive_bubbleSort(arr,size-1);
}
void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}
int main(){
  vector<int>arr = {4,6,2,3,9,17};
  int size = arr.size();
  recursive_bubbleSort(arr,size-1);
  display(arr);

}
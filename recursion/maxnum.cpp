#include<bits/stdc++.h>
using namespace std;

int minNum(int *arr, int size, int &min, int idx){
  if(idx > size){
    return min;
  }

  if(arr[idx] < min){
    min = arr[idx];
  }

  return minNum(arr, size, min, idx+1);
}

int main(){
  int arr[] = {0,4,68,-1,3,6,2,1};
  int size = sizeof(arr)/sizeof(int);
  int min = INT_MAX;
  int mini = minNum(arr, size, min, 0);
  cout<<mini<<endl;
  return 0; 
}
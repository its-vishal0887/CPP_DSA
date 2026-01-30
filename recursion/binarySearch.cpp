#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr, int l, int r, int target){
  
  if(l <= r){
    int mid = l + (r - l)/2;
    if(arr[mid] == target){
      return mid;
    }
    else if(arr[mid] < target){
      return binarySearch(arr, mid+1, r, target);
    }else{
      return binarySearch(arr, l, mid-1, target);
    }
  }

  return -1;
}

int main(){
  vector<int>arr = {3,-1,8,5,15,12};
  int t = 3;
  int search = binarySearch(arr, 0, arr.size()-1, t);
  cout<<t<<" found at IDX: "<<search<<endl;
}
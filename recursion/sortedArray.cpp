#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr ,int n){
  if(n == 1){
    return true;
  }

  if(arr[n-1] < arr[n-2]){
    return false;
  }

  return isSorted(arr, n-1);
}

int main(){
  vector<int>arr = {1,2,3,4,5,6};
  int n = arr.size();
  bool sorted = isSorted(arr, n);
  cout<<sorted<<" ";

}
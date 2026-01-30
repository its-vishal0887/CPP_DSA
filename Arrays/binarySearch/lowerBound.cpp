#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>&arr, int target){
  int n = arr.size();
  int low = 0, high = n-1;
  int ans = n;
  while(low <= high){

    int mid = (low + high)/2;
    if(arr[mid] >= target){
      ans =mid;
      high = mid-1;
    }else {
      low = mid + 1;
    }
  }
  return arr[ans];
}



int main(){
  vector<int>arr = {1,2,3,3,5,8,8,10,10,11};
  int target = 9;
  int bound = lowerBound(arr, target);
  cout<<bound;

  // auto lb = lower_bound(arr.begin(), arr.end(), target);
  // cout<<*lb<<" ";
}
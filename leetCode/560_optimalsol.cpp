#include<bits/stdc++.h>
using namespace std;

int subArrayCnt(vector<int>&arr, int k){
  int cnt = 0;
  unordered_map<int,int>mpp;
  int sum = 0;
  for(int i = 0; i<arr.size(); i++){
    sum = sum + arr[i];
    if(sum == k){
      cnt++;
    }
    if(mpp.find(sum - k) != mpp.end()){
      cnt++;
    }else{
      mpp[sum] = i;
    }
  }
  return cnt;
}

int main(){
  vector<int>arr = {1,1,1};
  int k  = 3;
  int cnt = subArrayCnt(arr, 2);
  cout<<cnt;
}
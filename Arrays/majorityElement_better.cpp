#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>&arr){
  map<int, int>mpp;
  for(int i = 0; i<arr.size(); i++){
    mpp[arr[i]]++;
  }
  for(auto it: mpp){
    if(it.second > (arr.size()/2)){
      return it.first;
    }
  }
  return -1;
}

int main(){
  vector<int>arr = {2,2,3,3,1,2,2};
  int majority = majorityElement(arr);
  cout<<majority<<endl;
}
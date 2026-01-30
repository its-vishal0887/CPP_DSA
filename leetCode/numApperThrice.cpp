#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>&arr){
  sort(arr.begin(),arr.end());
  int n = arr.size();
  map<int,int>hash;
  for(int i = 0; i<arr.size(); i++){
    hash[arr[i]]++;
  }
  for(auto it: hash){
    if(it.second != 3){
      return it.first;
    }
  }
  return -1;
}

int main(){
  vector<int>arr = {2,2,3,2};
  int singleNum = singleNumber(arr);
  cout<<singleNum;
}
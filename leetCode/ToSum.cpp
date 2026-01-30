#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&arr, int target){
  int i = 1;
  vector<int>result;
  while(i<=arr.size()){
    if(arr[i-1]+arr[i] == target){
      result.push_back(i-1);
      result.push_back(i);
    }
    i++;
  }
  return result;
}

int main(){
  vector<int>arr = {2,7,11,15};
  vector<int>sum = twoSum(arr,9);
  for(int i = 0; i<sum.size(); i++){
    cout<<sum[i]<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&sum, int &target){
  unordered_map<int, int>mpp;
  int num = sum.size();
  for(int i = 0; i<num; i++){
    int rem = target - sum[i];

    if(mpp.find(rem) != mpp.end()){
      return {mpp[rem], i};
    }

    mpp[sum[i]] = i;
  }
  return {-1};
}


void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i];
  }
}


int main(){
  vector<int>arr = {4,1,2,3,1};
  int k = 5;
  vector<int>newSize = twoSum(arr, k);
  display(newSize);

}
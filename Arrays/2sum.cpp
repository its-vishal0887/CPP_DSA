#include<bits/stdc++.h>
using namespace std;

vector<int>twoSum(vector<int>&arr, int k){
  int i = 0;
  unordered_map<int,int>mpp;
  for(int i =0; i<arr.size(); i++ ){
    int sum = arr[i];

    auto it = mpp.find(k - sum);
    if(it != mpp.end()){
      return {it->second, i};
    }

    mpp[sum] = i;

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
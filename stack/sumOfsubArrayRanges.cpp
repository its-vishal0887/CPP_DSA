#include<iostream>
#include<vector>
using namespace std;

int totalsum(vector<int>&arr){
  int n = arr.size();
  int sum = 0;

  for(int i = 0; i<n; i++){

    int maxi = arr[i];
    int mini = arr[i];

    for(int j = i; j<n; j++){
      mini = min(mini, arr[j]);
      maxi = max(maxi, arr[j]);
      sum = sum + (maxi - mini);
    }

  }
  return sum;
}

int main(){
  vector<int>nums = {1,2,3};
  int sum = totalsum(nums);
  cout<<sum<<endl;
}
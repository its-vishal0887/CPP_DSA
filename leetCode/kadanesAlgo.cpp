//Brute Force
#include<bits/stdc++.h>
using namespace std;

int maxSumm(vector<int>&arr){
  int maxSum = INT_MIN;
  for(int i = 0; i<arr.size(); i++){
    int sum = 0;
    for(int j = i; j<arr.size(); j++){
      sum += arr[j];
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

int main(){
  vector<int>arr = {3,-4,5,4,-1,7,8};
  int maxi = maxSumm(arr);
  cout<<maxi<<endl;
}
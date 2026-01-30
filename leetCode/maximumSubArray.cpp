#include<bits/stdc++.h>
using namespace std;

vector<int>maxArr(vector<int>&arr){
  int maxi = INT_MIN;
  int sum = 0;
  int sumStart = -1;
  int sumEnd = -1;
  int start;
  for(int i = 0; i<arr.size(); i++){
    sum = sum+arr[i];
    if(sum < 0){
      sum = 0;
      start = i+1;
    }else if(sum > maxi){
      maxi = sum;
      sumEnd = i;
      sumStart = start;
    }
  }
  return {start, sumEnd};
}

void display(vector<int>&arr2){
  for(int i = 0; i<arr2.size(); i++){
    cout<<arr2[i]<<" ";
  }
}

int main(){
  vector<int>arr = {-2,-3,4,-1,-2,1,5,-3};
  vector<int>newSize = maxArr(arr);
  display(newSize);
}
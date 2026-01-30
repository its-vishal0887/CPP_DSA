#include<bits/stdc++.h>
using namespace std;

vector<int>minmax(vector<int>&arr){
  int min = INT_MAX;
  int max = INT_MIN;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i]>max){
      max = arr[i];
    }else if(arr[i]<min){
      min = arr[i];
    }
  }
  return {min, max};
}

int main(){
  vector<int>arr = {1, 4, 3, -5, -4, 8, 6};
  vector<int>result = minmax(arr);
  for(auto it: result){
    cout<<it<<" ";
  }
}
#include<vector>
#include<iostream>
#include<limits>
using namespace std;

vector<int>getLeftMaxArray(vector<int>&arr, int &n){
  vector<int>leftmax(n);
  leftmax[0] = arr[0];

  for(int i = 1; i<n; i++){
    leftmax[i] = max(leftmax[i-1], arr[i]);
  }

  return leftmax;
}

vector<int>getRightMaxArray(vector<int>&arr, int &n){
  vector<int>rightmax(n);
  rightmax[n-1] = arr[n-1];

  for(int i = n-2; i>=0; i--){
    rightmax[i] = max(rightmax[i+1], arr[i]);
  }

  return rightmax;
}


int trap(vector<int>&arr){
  int n = arr.size();

  vector<int>leftMax = getLeftMaxArray(arr,n);
  vector<int>rightMax = getRightMaxArray(arr, n);

  int sum = 0;

  for(int i = 0; i<n; i++){
    int wid = min(leftMax[i], rightMax[i])-arr[i];
    sum += wid;
  }

  return sum;
}

int main(){
  vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
  int res = trap(arr);

  cout<<res<<endl;
}
#include<bits/stdc++.h>
using namespace std;

int largeSum(int arr[3][3], int row, int col){
  int maxSum = 0;
  
  for(int i = 0; i<row; i++){
    int sum = 0;
    for(int j = 0; j<col; j++){
      sum = sum + arr[i][j];
    }
    maxSum = max(maxSum, sum);
  }
  return maxSum;
}

int main(){
  int arr[3][3];
  int row = 3;
  int col = 3;

  for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
      cin>>arr[i][j];
    }
  }

  for(int i = 0; i<row; i++){
    for(int j = 0; j<col; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
  }


  int maxsum = largeSum(arr, row , col);
  cout<<maxsum;

}
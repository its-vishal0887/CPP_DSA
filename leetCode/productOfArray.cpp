#include<bits/stdc++.h>
using namespace std;

vector<int>prod(vector<int>&arr){
  // int prod = 1;
  // int div;
  // for(int i = 0; i<arr.size(); i++){
  //   prod = prod * arr[i];
  // }
  // for(int i = 0; i<arr.size(); i++){
  //   div = prod / arr[i];
  //   arr[i] = div;
  // }
  // return arr;

  int n = arr.size();
  // vector<int>result(n,1);
  // for(int i = 0; i<arr.size(); i++){
  //   int prod = 1;
  //   for(int j = 0; j<arr.size(); j++){
  //     if(i != j){
  //       result[i] *= arr[j];
  //     }
  //   }
  // }
  // return result;

  // int start = 0;
  // int end = n-1;
  int suffix = 1;
  int prefix = 1;
  int i = 0;
  while(i<n){
    int start = 0;
    int end = n-1;
    if(start != i){
      suffix = suffix * arr[start];
      start++;
    }else if(end != i){
      prefix = prefix * arr[end];
      end--;
    }
    int final = suffix * prefix;
    arr[i] = final;
    i++;
  }
  return arr;
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
} 

int main(){
  vector<int>arr = {1,2,3,4};
  vector<int>crr = prod(arr);
  display(crr);
}
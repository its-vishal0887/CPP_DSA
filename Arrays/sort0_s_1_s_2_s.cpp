#include<bits/stdc++.h>
using namespace std;

void count(vector<int>&arr){
  int cnt0 = 0, cnt1 = 0, cnt2 = 0;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] == 0){
      cnt0++;
    }else if(arr[i] == 1){
      cnt1++;
    }else{
      cnt2++;
    }
  }
  for(int i = 0; i<cnt0; i++){
    arr[i] = 0;
  }
  for(int i = cnt0; i<cnt0+cnt1; i++){
    arr[i] = 1;
  }
  for(int i = cnt1+cnt0; i<arr.size(); i++){
    arr[i] = 2;
  }
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {0,1,2,0,1,2,1,2,0,0,0,1};
  count(arr);
  display(arr);
}
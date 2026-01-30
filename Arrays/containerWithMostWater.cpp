#include<bits/stdc++.h>
using namespace std;

int container(vector<int>&arr){
  int lp = 0;
  int rp = arr.size()-1;
  int n = 0;
  while(lp<arr.size()){
    int maxWater = (rp-lp)*min(arr[lp], arr[rp]);
    if(maxWater>n){
      n = maxWater;
    }
    if(arr[lp]<arr[rp]){
      lp++;
    }else{
      rp--;
    }
  }
  return n;
}

int main(){
  vector<int>arr = {1,8,6,2,5,4,8,3,7};
  int maxwater = container(arr);
  cout<<maxwater;
}
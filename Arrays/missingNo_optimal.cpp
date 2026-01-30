#include<bits/stdc++.h>
using namespace std;

int maxConsicutive(vector<int>&arr){
  int Cnt = 0;
  int maxOnces = 0;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i] == 1){
      Cnt++;
    }else{
      Cnt = 0;
    }
    if(Cnt>maxOnces){
      maxOnces = Cnt;
    }
  }
  return maxOnces;
}

int main(){
  vector<int>arr = {1,1,0,1,1,1,0,1,1};
  int maxOnce = maxConsicutive(arr);
  cout<<maxOnce<<endl;
  return 0;
}
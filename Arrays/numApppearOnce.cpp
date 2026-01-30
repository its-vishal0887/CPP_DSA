#include<bits/stdc++.h>
using namespace std;

int numApperOnce(vector<int>&arr){
  int xor_1 = 0;
  int i = 0;
  while(i<arr.size()){
    xor_1 = xor_1^arr[i];
    i++;
  }
  return xor_1;
}

int main(){
  vector<int>arr = {1,1,2,3,3,4,4};
  int apperOnce = numApperOnce(arr);
  cout<<apperOnce<<endl;
}
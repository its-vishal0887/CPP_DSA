#include<bits/stdc++.h>
using namespace std;

vector<int>arre(vector<int>&arr){
  int cnt = 0;
  int el = 0;
  vector<int>newVec;
  for(int i = 0; i<arr.size(); i++){
    if(cnt== 0){
      cnt = 1;
      el = arr[i];
      
    }else if(el == arr[i]){
      // newVec.push_back(arr[i]);
      cnt++;
      if(cnt > (arr.size()/3)+1){
        newVec.push_back(arr[i]);
      }
    }
    else{
      cnt--;
    }
  }
  return newVec;  
}

int main(){
  vector<int>arr = {3,2,3};
  vector<int>newArr = arre(arr);
  for(auto it: newArr){
    cout<<it<<" ";
  }
}

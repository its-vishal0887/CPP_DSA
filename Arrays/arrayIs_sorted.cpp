#include<bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int>&arr){
  for(int i = 1; i<arr.size(); i++){
    if(arr[i]>= arr[i-1]){
      
    }else{
      return false;
    }
    
  }
  return true;
}

int main(){
  vector<int>arr = {1,2,3,4,5,6};
  cout<<is_sorted(arr);
}

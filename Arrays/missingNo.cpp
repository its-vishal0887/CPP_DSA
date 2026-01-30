#include<bits/stdc++.h>
using namespace std;

int missing_no(vector<int>&arr){
  int i = 0;
  int n = arr.size();
  int hash[n+1] = {0};
  for(; i<n; i++){
    hash[arr[i]] = 1;
  }
  for(int i = 1; i<=n; i++){
    if(hash[i] == 0){
      return i;
    }
  }
}

int main(){
  vector<int>arr = {1,2,4,5};
  int missing = missing_no(arr);
  cout<<missing<<endl;
}

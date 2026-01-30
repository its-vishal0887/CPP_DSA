#include<bits/stdc++.h>
using namespace std;

int linear_search(vector<int>&arr, int key){
  for(int i =0; i<arr.size(); i++){
    if(arr[i] == key){
      return i+1;
    }
  }
}

int main(){
  vector<int>arr = {1,5,6,4,2,3};
  int search = linear_search(arr, 3);
  cout<<"Element found at "<<search<<" index";
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<int>newSum(vector<int>&arr, int k){
  int left = 0;
  int right = arr.size()-1;
  int sum;
  sort(arr.begin(), arr.end());
  while(left<right){
   sum = arr[left]+arr[right];
   if(sum == k){
    return {left, right};
   } 
   if(sum < k){
    left++;
   }else{
    right--;
   }
  }
  return {-1};
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i];
  }
}

int main(){
  vector<int>arr = {4,1,2,3,1};
  int k = 5;
  vector<int>newSize = newSum(arr, k);
  display(newSize);

}
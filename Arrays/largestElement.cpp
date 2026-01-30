#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int>&arr){
  int max = INT_MIN;
  int i = 0;
  while(i != arr.size()-1){
    if(arr[i]>max){
      max = arr[i];
    }
    i++;
  }
  return max;
}

int main(){
  vector<int>arr = {3,2,1,5,2};
  int largestEle = largestElement(arr);
  cout<<largestEle<<endl;
}
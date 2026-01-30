#include<bits/stdc++.h>
using namespace std;

int largest(vector<int>&arr){
  int i = 0;
  int max = INT_MIN;
  while(i != arr.size()){
    if(arr[i]>max){
      max = arr[i];
      
    }
    i++;
  }
  
  int s_Largest = -1;
  for(int i = 0; i<arr.size(); i++){
    if(arr[i]>s_Largest && arr[i] != max){
      s_Largest = arr[i];
    }
  }
  return s_Largest;
}

int main(){
  vector<int>arr = {1,2,4,7,7,5};
  int SecondLargest = largest(arr);
  cout<<SecondLargest<<endl;
}

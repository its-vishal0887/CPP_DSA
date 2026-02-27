#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>cnt(vector<int>&arr){
  // stack<int>st;
  // st.push(0);
  int n = arr.size();
  vector<int>temp(arr.size());
  temp[n-1] = 0;
  for(int i = arr.size()-2; i>=0; i--){
    int cnt = 0;
    int ele = arr[i];
    for(int j = i; j<arr.size(); j++){
      int curr = arr[j];
      if(curr < ele){
        cnt++;
      }
    }
    temp[i] = cnt;
  }
  return temp;
}

void print(vector<int>arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {1000000000, -1000000000};
  // Output: [6, 1, 1, 1, 0, 1, 0]
  vector<int>temp = cnt(arr);
  print(temp);
  return 0;
}
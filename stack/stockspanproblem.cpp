#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>stockSpan(vector<int>&arr){
  vector<int>temp(arr.size());
  stack<int>st;
  temp[0] = 1;
  st.push(0);
  for(int i = 1; i<arr.size(); i++){
    while(!st.empty() && arr[st.top()] <= arr[i]){
      st.pop();
    }
    if(st.empty()){
      temp[i] = i;
    }
    else{
      int ele = st.top();
      temp[i] = i - ele;
    }
  }
  return temp;
}

int main(){
  vector<int>arr = {10, 4, 5, 90, 120, 80};
  vector<int>res = stockSpan(arr);
  for(int i = 0; i<res.size(); i++){
    cout<<res[i]<<" ";
  }
}
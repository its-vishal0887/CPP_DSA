#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int>nextSmall(vector<int> &arr){
  vector<int>temp(arr.size());
  stack<int>st;
  st.push(-1);
  for(int i = arr.size()-1; i>=0; i--){
    int curr = arr[i];
    while( st.top() >= curr){
      st.pop();
    }
    temp[i] = st.top();
    st.push(curr);
  }
  return temp;
}

void print(vector<int>arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {4, 8, 5, 2, 25};
  vector<int>res = nextSmall(arr);
  print(res);
  return 0;
}
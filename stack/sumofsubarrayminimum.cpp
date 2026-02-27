#include<iostream>
#include<vector>
#include<stack>
#include<climits>
using namespace std;

//bruteforce
// int totalsum(vector<int>&arr){
//   int sum = 0;
//   for(int i = 0; i<arr.size(); i++){
//     int mini = arr[i];
//     for(int j = i; j<arr.size(); j++){
//       mini = min(mini, arr[j]);
//       sum = (sum + mini)%(int)(1e9+7);
//     }
//   } 
//   return sum;
// }

//optimal
vector<int>prevsmaller(vector<int>&arr){
  int n = arr.size();
  stack<int>st;
  vector<int>res(n);

  for(int i = 0; i<n; i++){

    while(!st.empty() && arr[i] < arr[st.top()]){
      st.pop();
    }

    int prevIndex = st.empty() ? -1 : st.top();

    res[i] = i - prevIndex;


    st.push(i);
  }

  return res;
}

vector<int>nextsmaller(vector<int>&arr){
  int n = arr.size();
  vector<int>res(n);
  stack<int>st;

  for(int i = n-1; i>=0; i--){

    while(!st.empty() && arr[i] < arr[st.top()]){
      st.pop();
    }

    int nexIdx = st.empty()? n : st.top();

    res[i] = nexIdx - i;
    st.push(i);
  }  
  return res;
}

int totalsum(vector<int>&arr){
  vector<int>res = prevsmaller(arr);
  vector<int>ans = nextsmaller(arr);
  int n = arr.size();
  long long sum = 0;
  for(int i = 0; i<n; i++){
    int contribution = (long long)arr[i] * res[i] * ans[i];
    sum += contribution;
  }
  return sum;
}

int main(){

  vector<int>arr = {3,1,2,4};
  int temp = totalsum(arr);
  cout<<temp;
  // vector<int>res = prevsmaller(arr);
  // vector<int>ans = nextsmaller(arr);
  // for(int i = 0; i<arr.size(); i++){
  //   cout<<res[i]<<" ";
  // }
  // cout<<endl;
  // for(int i = 0; i<arr.size(); i++){
  //   cout<<ans[i]<<" ";
  // }
}
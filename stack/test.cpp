#include<iostream>
#include<vector>
#include<stack>
using namespace std;

//bruteforce
// vector<int>res(vector<int>&arr){
//   // vector<int>ans;
  
//   int n = arr.size();
//   vector<int>ans(n, -1);
//   for(int i = 0; i<n; i++){
//     for(int j = i+1; j<=n; j++){
//       if(arr[j] > arr[i]){
//         ans[i] = arr[j];
//         break;
//       }
//     }
//   }
//   return ans;
// }

//optimal
// vector<int>res(vector<int>&arr){
//   // vector<int>ans;
//   stack<int>st;
//   int n = arr.size();
//   vector<int>ans(n);
  
//   for(int i = n-1; i>=0; i--){

//     while(!st.empty() && st.top() <= arr[i]){
//       st.pop();
//     }

//     if(st.empty()){
//       ans[i] = -1;
//     }
//     else if(!st.empty() && st.top() >= arr[i]){
//       ans[i] = st.top();
//     }

//     st.push(arr[i]);
//   }

//   return ans;
// }

//circular array

vector<int>res(vector<int>&arr){
  // vector<int>ans;
  int n = arr.size();
  vector<int>ans(n);
  stack<int>st;
  for(int i = 2*n-1; i>=0; i--){
    while(!st.empty() && st.top()<=arr[i % n]){
      st.pop();
    }

    if(i < n){
      ans[i] = st.empty() ? -1 : st.top();
    }
    st.push(arr[i % n]);
  }

  return ans;
}

int main(){
  vector<int>temp = {6,0,8,1,3};
  vector<int>result = res(temp);
  for(int i = 0; i<result.size(); i++){
    cout<<result[i]<<" ";
  }
}
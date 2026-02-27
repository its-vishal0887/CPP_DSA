#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> greaterele(vector<int>&nums)
{
  // unordered_map<int,int>mpp;
  // stack<int>st;

  // for(int i = 0; i<arr2.size(); i++){
  //   while(!st.empty() && arr2[i] > st.top()){
  //     mpp[st.top()] = arr2[i];
  //     st.pop();
  //   }
  //   st.push(arr2[i]);
  // }

  // vector<int>ans;
  // for(int i = 0; i<arr1.size(); i++){
  //   if(mpp.find(arr1[i]) != mpp.end()){
  //     ans.push_back(mpp[arr1[i]]);
  //   }
  //   else{
  //     ans.push_back(-1);
  //   }
  // }
  // return ans;
}

int main()
{
  vector<int> arr1 = {4, 1, 2};
  vector<int> arr2 = {1, 3, 4, 2};
  vector<int> ans = greaterele(arr2);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << " ";
  }
}
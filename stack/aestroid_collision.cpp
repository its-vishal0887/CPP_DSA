#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int>asto(vector<int>&arr){
  stack<int>st;
  int n = arr.size();
  vector<int>res;
  
  for(int i = 0; i<n; i++){

    int a = arr[i];

    while(!res.empty() && (res.back() >0 && a < 0)){

      int sum = res.back() + a;

      if(sum > 0){
        a = 0;
      }
      else if(sum < 0){
        res.pop_back();
      }

      else{
        res.pop_back();
        a = 0;
      }
    }

    if(a != 0){
      res.push_back(a);
    }
  }
  return res;
}

int main(){
  vector<int>arr = {10,2,3,-5};
  vector<int>ans = asto(arr);
  for(int i =0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}

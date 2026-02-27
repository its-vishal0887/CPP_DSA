#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;

vector<int> res(const vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st; // store indices

    // iterate over the array twice to simulate circular behavior
    for (int i = 0; i < 2 * n; ++i) {
        int cur = arr[i % n];
        while (!st.empty() && cur > arr[st.top()]) {
            result[st.top()] = cur;
            st.pop();
        }
        if (i < n) {
            // only push index for the first pass
            st.push(i);
        }
    }
    return result;
}

int main(){
  vector<int>arr = {100,1,11,1,120,111,123,1,-1,-100};
  vector<int>ans = res(arr);

  for(int i =0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}

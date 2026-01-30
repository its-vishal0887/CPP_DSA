//better solution

#include<bits/stdc++.h>
using namespace std;

// int longestSuccessiveElement(vector<int>&arr){
//   if(arr.size() == 0) return 0;
//   sort(arr.begin(), arr.end());
//   int n = arr.size();
//   int longest = 1;
//   int cnt = 0;
//   int lastSmaller = INT_MIN;
//   for(int i = 0; i<n; i++){
//     if(arr[i]-1 == lastSmaller){
//       cnt +=1;
//       lastSmaller = arr[i];
//     }else if( arr[i] != lastSmaller){
//       cnt = 1;
//       lastSmaller = arr[i];
//     }
//     longest = max(longest, cnt);
//   }
//   return longest;
// }

int longestConsecutive(vector<int>&arr){
  int n = arr.size();
  int longest = 1;
  int cnt = 0;
  int lastSmaller = INT_MIN;
  unorderd_set<int>st;
  for(int i = 0; i<n; i++){
    st.insert(arr[i]);
  }

  for(auto it: st){
    if(st.find(it - 1) == st.end()){
      cnt = 1;
      lastSmaller = it;
      
      while(st.find(lastSmaller + 1) != st.end()){
        lastSmaller = lasteSmaller + 1;
        cnt++;
      }
      longest = max(longest, cnt);
    }

  }
  return longest;
}
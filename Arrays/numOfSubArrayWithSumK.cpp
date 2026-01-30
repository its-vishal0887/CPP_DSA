#include <bits/stdc++.h>
using namespace std;

// int count(vector<int> &arr, int k)
// {
//   int cnt = 0;
//   int n = arr.size();
//   for (int i = 0; i < n; i++)
//   {
//     int sum = 0;
//     for (int j = i; j < n; j++)
//     {
//       sum = sum + arr[j];
//       if (sum == k)
//       {
//         cnt++;
//       }
//     }
//   }
//   return cnt;
// }
int count(vector<int>&arr, int k){
  int cnt = 0;
  int prefix = 0;
  unordered_map<int, int>mpp;
  mpp[0] = 1;
  for(int i = 0; i<arr.size(); i++){
    prefix += arr[i];
    auto it = mpp.find(prefix-k);
      if(it != mpp.end()){
        cnt += it->second;
      }
      mpp[prefix]++;
  }
  return cnt;
}


int main()
{
  vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
  cout << count(arr, 3) << " ";
}
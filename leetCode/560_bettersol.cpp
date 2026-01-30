#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k)
{
  int maxLen = 0;
  int preFixsum = 0;
  int cnt = 0;
  unordered_map<int, int> mp;
  for (int i = 0; i < nums.size(); i++)
  {
    preFixsum = preFixsum + nums[i];
    if (preFixsum == k)
    {
      cnt++;
    }
    auto it = mp.find(preFixsum - k);
    if (it != mp.end())
    {
      cnt++;
    }

    auto it2 = mp.find(preFixsum);
    if (it2 == mp.end())
    {
      mp.insert({preFixsum, i});
    }
  }
  return cnt;
}

int main(){
  vector<int>arr = {0,0,0,0,0,0,0,0,0,0};
  int k = 0;
  int len = subarraySum(arr, k);
  cout<<len;
}
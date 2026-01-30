#include <bits/stdc++.h>
using namespace std;

int firstOccuranc(vector<int> &arr, int target)
{
  int ans = -1;
  int n = arr.size();
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == target)
    {
      ans = mid;
      high = mid - 1;
    }
    else if (arr[mid] < target)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

int secOccurance(vector<int> &arr, int target)
{
  int ans = -1;
  int n = arr.size();
  int low = 0, high = n - 1;
  while (low <= high)
  {
    int mid = (low + high) / 2;

    if (arr[mid] == target)
    {
      ans = mid;
      low = mid + 1;
    }
    else if
      (arr[mid] > target)
      {
        low = mid + 1;
      }
    else
    {
      high = mid - 1;
    }
  }
  return ans;
}

vector<int> allOccurance(vector<int> &nums, int target)
{
  int fOccurace = firstOccuranc(nums, target);
  int Loccureace = secOccurance(nums, target);
  return {fOccurace, Loccureace};
}

int main()
{
  vector<int> arr = {5, 7, 7, 8, 8, 10};
  int target = 6;
  vector<int> newVec = allOccurance(arr, target);

  for (int i = 0; i < newVec.size(); i++)
  {
    cout << newVec[i] << " ";
  }
}
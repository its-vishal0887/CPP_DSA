#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<vector<int>> spiral;
  int row = spiral.size();
  int col = spiral[0].size();

  int top = 0;
  int left = 0;
  int right = col - 1;
  int bottom = row - 1;
  vector<int>result;

  while (top <= bottom && right <= left)
  {
    for (int i = left; i <= right; i++)
    {
      result.push_back(spiral[top][i]);
    }
    top++;
    for (int i = top; i <= bottom; i++)
    {
      result.push_back(spiral[i][right]);
    }
    right--;
    if (top <= bottom)
    {
      for (int i = right; i >= left; i--)
      {
        result.push_back(spiral[bottom][i]);
      }

      bottom--;
    }
    if (left <= right)
    {
      for (int i = bottom; i >= top; i--)
      {
        result.push_back(spiral[i][left]);
      }
      left++;
    }
  }
  return result;
}
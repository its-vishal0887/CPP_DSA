#include <bits/stdc++.h>
using namespace std;

vector<int> unionOfsortedArray(vector<int> &arr1, vector<int>&arr2)
{
  vector<int> result;
  int n1 = arr1.size();
  int n2 = arr2.size();
  int i = 0;
  int j = 0;
  while (i < n1 && j < n2)
  {
    if (arr1[i] <= arr2[j])
    {
      if (result.size() == 0 || result.back() != arr1[i])
      {
        result.push_back(arr1[i]);
      }
      i++;
    }
    else
    {
      if (result.size() == 0 || result.back() != arr2[j])
      {
        result.push_back(arr2[j]);
      }
      j++;
    }
  }
  while (i < n1)
  {
    if (result.size() == 0 || result.back() != arr1[i])
    {
      result.push_back(arr1[i]);
    }
    i++;
  }
  while (j < n2)
  {
    if (result.size() == 0 || result.back() != arr2[j])
   {
     result.push_back(arr2[j]);
   }
   j++;
  }
  return result;
}
void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr1 = {1,2,3,4,5};
  vector<int>arr2 = {1,2,7};
  vector<int>uniArr = unionOfsortedArray(arr1, arr2);
  display(uniArr);
  return 0;

}
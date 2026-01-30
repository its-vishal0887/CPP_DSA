#include<bits/stdc++.h>
using namespace std;

// void squreOfSortedArray(vector<int>&arr){
//   int i = 0;
//   int j = 0;
//   int k = 0;
//   while(i<arr.size()){
//     long long num = arr[i] * arr[i];
//     arr[j] = num;
//     j++;
//     i++;
//   }
//   sort(arr.begin(), arr.end());
// }

vector<int>squreOfSortedArray(vector<int>&arr){
  int i = 0;
  int j = arr.size() - 1;
  int k = arr.size() - 1;
  vector<int>newArr(k);
  
  

  while(i<=j){
    long long right = 1LL* arr[i] * arr[i];
    long long left = 1LL* arr[j] * arr[j];

    if(left < right){
      newArr[k] = right;
      k--;
      i++;
    }else{
      newArr[k] = left;
      k--;
      j--;
    }
  }
  return newArr;
}
void displayy(vector<int>&arr){
  for(auto it: arr){
    cout<<it<<" ";
  }
}

int main(){
  vector<int>arr = {-4,5,6,0,1,2};
  vector<int>newSize = squreOfSortedArray(arr);
  displayy(newSize);
}
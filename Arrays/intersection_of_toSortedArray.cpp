#include<bits/stdc++.h>
using namespace std;

vector<int>intersection(const vector<int>&arr_1, const vector<int>&arr_2){
  int n1 = arr_1.size();
  int n2 = arr_2.size();
  int i = 0;
  int j = 0;
  vector<int>result;
  while(i<n1 && j<n2){
    if(arr_1[i] == arr_2[j]){
      if( result.empty()||result.back() != arr_1[i] ){
        result.push_back(arr_1[i]);
      }
      i++;
      j++;

    }else if(arr_1[i]<arr_2[j]){
      i++;
    }else if(arr_1[i]>arr_2[j]){
      j++;
    }
  }
  return result;
}

void display(vector<int>&arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr_1 = {1,2,2,3,3,4,5,6};
  vector<int>arr_2 = {2,3,3,5,6,6,7};
  vector<int>interSection = intersection(arr_1, arr_2);
  display(interSection);
  return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int> evenVec(vector<int> &reffvec ,int size, int *arr, int idx){

  if(idx >= size){
    return reffvec;
  }

  if(arr[idx] % 2 == 0){
    reffvec.push_back(arr[idx]);
  }

  return evenVec(reffvec, size, arr, idx+1);
}

int main(){
  vector<int> reffvec;
  int arr[] = {10,5,6,3,4,8,74,23};
  int size = sizeof(arr)/sizeof(int);
  vector<int> evenNum = evenVec(reffvec, size, arr, 0);
  for(int i : evenNum){
    cout<<i<<endl;
  }
  return 0;

}
#include<bits/stdc++.h>
using namespace std;

void moveZeroToEnd(vector<int>&arr){
  int i =0;
  int j =0;
  if(arr.size() == 0 || arr.size() == 1){

  }
  while(j<arr.size()){
    if(arr[j] != 0){
      swap(arr[j], arr[i]);
      i++;
    }
    j++;
  }

}
void display(vector<int>arr){
  for(int i =0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>arr = {0,1,0,3,12};
  moveZeroToEnd(arr);
  display(arr);
}
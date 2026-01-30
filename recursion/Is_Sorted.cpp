#include<bits/stdc++.h>
using namespace std;

bool IsSorted(int arr[], int n){
  if(n == 1 || n == 0){
    return true;
  }

  if(arr[n-2] > arr[n-1]){
    return false;
  }

  return IsSorted(arr, n-1);

}

int main(){
  int arr[6] = {2,4,6,9,11,13};
  cout<<IsSorted(arr ,6 );
}
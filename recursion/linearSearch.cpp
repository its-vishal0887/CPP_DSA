#include<bits/stdc++.h>
using namespace std;

bool linearSearch(int arr[], int n, int key){
  
  if(n < 0){
    return false;
  }

  if(n == key){
    return true;
  }
  
  return linearSearch(arr, n-1, key);
}
int main(){
  int arr[] = {1,2,3,4,5};
  int n = 5, key = 2;
  cout<<linearSearch(arr, n, key);
  
}
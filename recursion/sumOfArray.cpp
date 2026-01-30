#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int arr[], int n){
  if(n == 0){
    return 0;
  }
  return arr[n-1] + sumOfArray(arr, n-1);
}

int main(){
  int arr[6] = {3,2,9,9,9};
  int IsSum = sumOfArray(arr, 6);
  cout<<IsSum<<endl;
}
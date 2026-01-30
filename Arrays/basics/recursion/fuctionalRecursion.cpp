#include<iostream>
using namespace std;

void revreseArr( int Arr[], int l, int n){
  if(l >= n){
    return;
  }
  swap(Arr[l], Arr[n]);
  return revreseArr(Arr, l+1, n-1);
}

void display(int Arr[],int size){
  for(int i = 0; i<size; i++){
    cout<<Arr[i]<<" ";
  }
}

int main(){
  int Arr[] = {2,5,6,3,4,4};
  int size = sizeof(Arr)/sizeof(int);
  revreseArr(Arr, 0, size-1);
  display(Arr, size);
  return 0;

}
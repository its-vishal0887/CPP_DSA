#include<iostream>
using namespace std;

void selection_sort(int Arr[], int size){
  int minIdx;
  for(int i = 0; i<size-1; i++){
    minIdx = i;
    for(int j = i+1; j<size; j++){
      if(Arr[j]<Arr[minIdx]){
        minIdx = j;
      }
    }
    swap(Arr[minIdx], Arr[i]);
  }
}

void display(int arr[], int size){
  for(int i = 0; i < size; i++){
    cout<<arr[i]<<endl;
  }
}

int main(){
  int n;
  cout<<"Enter size:";
  cin>>n;
  int arr[n];

  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }

  cout<<"Element After Selection Sort:->\n";
  selection_sort(arr, n);
  display(arr, n);
}
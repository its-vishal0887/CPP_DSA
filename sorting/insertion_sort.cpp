#include<iostream>
using namespace std;

void insertion_sort(int arr[], int size){
    // for(int i = 1; i < size; i++){
    //     int temp = arr[i];
    //     int j = i-1;
    //     while(j >= 0 && arr[j] > temp){
    //         arr[j+1] = arr[j];
    //         j--;
    //     }
    //     arr[j+1] = temp;  // Place temp in correct position
    // }
    for(int i = 1; i<size; i++){
      int temp = arr[i];
      int j = i-1;
      for(; j>=0; j--){
        if(arr[j]>temp){
          arr[j+1] = arr[j];
        }else{
          break;
        }
      }
      arr[j+1] = temp;
    }
}

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";  // Added space for better readability
    }
    cout << endl;  // Added newline
}

int main(){
    int arr[] = {10,1,7,4,8,2,11};
    int size = sizeof(arr)/sizeof(int);
    insertion_sort(arr, size);
    display(arr, size);
    return 0;  // Added return statement
}
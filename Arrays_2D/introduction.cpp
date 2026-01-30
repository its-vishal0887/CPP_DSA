#include<bits/stdc++.h>
using namespace std;

// bool linearSearch(int arr[][3], int target, int m, int n){
//   for(int i = 0; i<m; i++){
//     for(int j = 0; j<n; j++){
//       if(arr[i][j] == target){
//         return true;
//       }
//     }
//   }
//   return false;
// }

void printrowWiseSum(int arr[][3], int m, int n){
  for(int i = 0; i<m; i++){
    int sum = 0;
    for(int j = 0; j<n; j++){
      sum+=arr[i][j];
    }
    cout<<sum<<" ";
  }
}

int main(){
  int arr[3][3];
  int row = 3;
  int col = 3;

  for(int i =0; i<row; i++ ){
    for(int j = 0; j<col; j++){
      cin>>arr[i][j];
      
    }
  }

  // for(int i = 0; i<row; i++){
  //   for(int j = 0; j<col; j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }

  // if(linearSearch(arr, 3, 3, 3)){
  //   cout<<"\nElement is present!!";
  // }else{
  //   cout<<"\nElement is not present!!";
  // }

  printrowWiseSum(arr,row,col);
}
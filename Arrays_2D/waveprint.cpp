#include <bits/stdc++.h>
using namespace std;

vector<int>wavePrint(const vector<vector<int>>& arr) {
  int row = arr.size();
  int col = arr[0].size();
    vector<int> ans;
    // for(int i = 0; i<col; i++){
    //   if(i&1){
    //     for(int j = row-1; j>=0; j--){
    //       // cout<<arr[i][j]<<" ";
    //       ans.push_back(arr[i][j]);
  
    //     }
    //   }else{
    //     for(int j = 0; j<row; j++){
    //       // cout<<arr[i][j]<<" ";
    //       ans.push_back(arr[i][j]);
    //     }
    //   }
    // }
    for(int i = 0; i<col; i++){
      if(i%2 == 0){
        for(int j = 0; j<row; j++){
          ans.push_back(arr[j][i]);
        }
      }else{
        for(int j = row-1; j>=0; j--){
          ans.push_back(arr[j][i]);
        }
      }
    }
    return ans;
}

int main() {
    int row = 4;
    int col = 3;
    vector<vector<int>> arr(row, vector<int>(col));

    for(int i = 0; i<row; i++){
      for(int j = 0; j<col; j++){
        cin>>arr[i][j];
      }
    }

    vector<int>newInt = wavePrint(arr);
    
    for(int i = 0; i<newInt.size(); i++){
      cout<<newInt[i]<<" ";
    }

    return 0;
}
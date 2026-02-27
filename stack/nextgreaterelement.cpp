#include<iostream>
#include<vector>
#include<unordered_map>
#include<stack>
using namespace std;

vector<int>nxtgrtrele(vector<int>&num1, vector<int>&num2){
  vector<int>ans;

  if(num2.size() == 0 || num2.size() == 1){
    return {};
  }

  // loop kar lo index ko
  int foundidx = 0;
  for(int i = 0; i<num1.size(); i++){
    for(int j = 0; j<num2.size(); j++){
      if(num1[i] == num2[j]){
        foundidx = j;
        break;
      }
    }
  
    int foundele = -1;
    for(int k = foundidx+1; k<num2.size(); k++){
      if(num2[k] > num1[i] ){
        foundele = num2[k];
        break;
      }
    }
    ans.push_back(foundele);
  }
  // for(int i = 0; i<num1.size(); i++){
  //   for(int j = 0; j<num2.size(); j++){
  //     if(num1[i] == num2[j]){
  //       if(j+1 < num2.size() && num2[j+1] > num1[i]){
  //         ans.push_back(num2[j+1]);
  //       }
  //       else{
  //         ans.push_back(-1);
  //       }
  //     }
  //   }
  // }
  return ans;

}

void print(vector<int>arr){
  for(int i = 0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  vector<int>num1 = {4,5,1};
  vector<int>num2 = {6,5,4,3,2,1};
  vector<int>ans = nxtgrtrele(num1, num2);
  print(ans);
  return 0;

}
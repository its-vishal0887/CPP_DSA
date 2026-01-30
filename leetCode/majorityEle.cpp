//better solution

#include<bits/stdc++.h>
using namespace std;

// int majority(vector<int>&arr){
//   int freq = 1;
//   int ans = arr[0];

//   sort(arr.begin(), arr.end());

//   for(int i = 1; i<arr.size(); i++){
//     if(arr[i] == arr[i-1]){
//       freq++;
//     }else{
//       ans = arr[i];
//       freq = 1;
//     }
//     if(freq>(arr.size()/2)){
//       return ans;
//     }
//   }
//   return -1;
// }

int majority(vector<int>&arr){
  int freq = 0;
  int ans = 0;
  for(int i = 0; i<arr.size(); i++){
    if(ans = arr[i]){
      freq++;
    }if(freq ==  0){
      ans = arr[i];
    }else{
      freq--;
    }
  }
  return ans;

}

int main(){
  vector<int>arr = {2,2,1,1,1,2,2};
  int ele = majority(arr);
  cout<<ele<<endl;
}


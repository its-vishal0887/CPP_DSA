#include<bits/stdc++.h>
using namespace std;

int countDeletedCoulumn(vector<string>&str){
  int m = str.size();
  int n = str[0].size();
  int cnt = 0;

  for(int i = 0; i<n; i++){
    for(int j = 1; j<m; j++){
      if(str[j][i] < str[j-1][i]){
        cnt++; break;
      }
    }
  }

  return cnt;

}

int main(){
  vector<string>strs = {"cba","daf","ghi"};
  int DelCount = countDeletedCoulumn(strs);
  cout<<DelCount;
}
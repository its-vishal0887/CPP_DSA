#include<bits/stdc++.h>
using namespace std;

vector<int>lps(vector<char>&ch){

  int i = 1, len = 0;
  vector<int>pattern(ch.size(), 0);
  while(i < ch.size()){
    if(ch[i] == ch[len]){
      len++;
      pattern[i] = len;
      i++;
    }else{
      if(len != 0){
        len = pattern[len - 1];
      }else{
        i++;
      }
    }
  }
  return pattern;
}

int main(){
  vector<char>cha = {'g','e','e','k','x','g','e','e','k'};
  vector<int>newVec = lps(cha);
  for(int i = 0; i<newVec.size(); i++){
    cout<<newVec[i]<<" ";
  }
}
#include<bits/stdc++.h>
using namespace std;

string makeGood(string s){
  int n = s.length();
  string result = "";
  for(int i = 0; i< n; i++){
    if(!result.empty() && s[i] == result.back() + 32 || s[i] == result.back() - 32){
      result.pop_back();
    }else{
      result.push_back(s[i]);
    }
  }
  return result;
}

int main(){
  string s = "leEeetcode";
  string good = makeGood(s);
  cout<<good;
}
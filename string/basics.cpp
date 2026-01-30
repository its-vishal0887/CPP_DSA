#include<bits/stdc++.h>
using namespace std;

string rev(string s){
  string str;
  string ans = "";
  int k = 0;
  reverse(s.begin(), s.end());
  istringstream ns(s);
  while(ns >> str){
    reverse(str.begin(), str.end());
    if(ans.size() > 0){
      ans += " ";
    }
    ans += str;
  }
  return ans;
}

int main(){
  string s = "the sky is blue";
  string newStr = rev(s);
  cout<<newStr<<" ";
}
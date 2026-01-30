#include<bits/stdc++.h>
using namespace std;

bool isSubSeq(string s, string t){
  int i = 0, j = 0;
  int n = s.size(), m = t.size();
  while(i < n && j < m){
    if(s[i] != t[j]){
      i++;
    }
    j++;
  }
  return i == n;
}

int main(){
  string s = "abc", t = "ahbgdc";
  cout<<isSubSeq(s,t);
}



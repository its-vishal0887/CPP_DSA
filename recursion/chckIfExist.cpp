#include<bits/stdc++.h>
using namespace std;

bool isSubSeq(string s, string t){
  vector<int>arr(26, 0);
  vector<int>arr2(26,0);
  for(char ch: t){
    arr[ch - 'a']++;
  }
  for(char ch : s){
    arr2[ch - 'a']++;
  }

  for(int i = 0; i<s.size(); i++){
    int ch2 = s[i] - 'a';
    if(arr[ch2] != arr2[ch2]){
      return false;
    }
  }

  return true;
}

int main(){
  string s = "acb", t = "ahbgdc";
  cout<<isSubSeq(s, t);
}


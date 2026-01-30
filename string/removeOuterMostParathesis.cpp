#include<bits/stdc++.h>
using namespace std;

string rmveOtrPart(string s){
  string ans = "";
  int depth = 0;
  for(char c: s){
    if(c == '('){
      if(depth>0){
        ans += c;
      }
      depth++;
    }else if(c == ')'){
      depth--;
      if(depth > 0){
        ans += c;
      }
    }
    
  }
  return ans;
}

int main(){
  string s = "(()())(())";
  string newStr = rmveOtrPart(s);
  cout<<newStr;
}
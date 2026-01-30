#include<bits/stdc++.h>
using namespace std;

string revWordInstr(string s){
  string ans = "";
  int i = 0;
  reverse(s.begin(), s.end());

  for(int i = 0; i<s.length(); i++){
    string word = ""    ;
    
    while( i<s.length() && s[i] != ' '){
      word += s[i];
      i++;
    }
    reverse(word.begin(), word.end());

    if(word.length() > 0){
      ans += " " + word;
    }
  }
  return ans.substr(1);
}
//s
int main(){
  string s = "The Man";
  string newS = revWordInstr(s);
  cout<<newS<<endl;
}
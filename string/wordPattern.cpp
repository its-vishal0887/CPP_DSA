/*
Example 1:

Input: pattern = "abba", s = "dog cat cat dog"

Output: true

Explanation:

The bijection can be established as:

'a' maps to "dog".
'b' maps to "cat".
Example 2:

Input: pattern = "abba", s = "dog cat cat fish"

Output: false

Example 3:

Input: pattern = "aaaa", s = "dog cat cat dog"

Output: false
*/

#include<bits/stdc++.h>
using namespace std;

bool wordPatter(string pattern, string s){
  unordered_map<char, string>m1;
  unordered_map<string, char>m2;
  vector<string>word;
  istringstream ns(s);

  while(ns >> s){
    word.push_back(s);
  }

  if(word.size() != pattern.size()){
    return false;
  }

  for(int i = 0; i<pattern.size(); i++){
    char ch = pattern[i];
    string st = word[i];

    if(m1.find(ch) != m1.end() && m1[ch] != st){
      return false;
    }
    else if(m2.find(st) != m2.end() && m2[st] != ch){
      return false;
    }
    else{
      m1[ch] = st;
      m2[st] = ch;
    }
  }
  return true;
}

int main(){
  string pattern = "abba", s = "dog cat cat dog";
  int pat = wordPatter(pattern, s);
  if(pat != 1){
    cout<<"Not word pattern String";
  }else{
    cout<<"Is's word pattern   String";
  }
  return 0;
}

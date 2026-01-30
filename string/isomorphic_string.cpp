#include<bits/stdc++.h>
using namespace std;

/* 
Input: s = "egg", t = "add"
Output: true
Explanation:
The strings s and t can be made identical by:
Mapping 'e' to 'a'.
Mapping 'g' to 'd'.
Example 2:
Input: s = "foo", t = "bar"
Output: false
Explanation:
The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
Example 3:
Input: s = "paper", t = "title"
Output: true 
*/

bool isomorphicString(string s, string t){
  if(s.size() != t.size()){
    return false;
  }

  for(int i = 0; i<s.size(); i++){
    map<char, char>m1,m2;

    if(m1.find(s[i]) != m1.end()){
      if(m1[s[i]]  != t[i]){
        return false;
      }
    }
    else if(m2.find(t[i]) != m2.end()){
      if(m2[t[i]] != s[i]){
        return false;
      }
    }
    else{
      m1[s[i]] = t[i];
      m2[t[i]] = s[i]; 
    }
  }
  return true;
}

int main(){
  string s = "egg", t = "add";
  int iso = isomorphicString(s, t);
  if(iso != 1){
    cout<<"Not IsoMorphic String";
  }else{
    cout<<"Is's IsoMorphic String";
  }
  return 0;
}
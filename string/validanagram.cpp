#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string s, string t){
  
  char freq[26] = {0};
  if(s.size() != t.size()){
    return false;
  }
  for(char c : s){
    freq[c - 'a']++;
  }
  for(char cp: t){
    freq[cp - 'a']--;
  }

  for(int i = 0; i<s.size(); i++){
    if(freq[i] != 0){
      return false;
    }
  }
  return true;
}

int main(){
  string s = "anagram", t = "nagaram";
  int valid = validAnagram(s, t);
  if(valid != 1){
    cout<<"Not Anagram";
  }else{
    cout<<"Anagram";
  }
  return 0;
}
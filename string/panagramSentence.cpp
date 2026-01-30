/*
A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.

 

Example 1:

Input: sentence = "thequickbrownfoxjumpsoverthelazydog"
Output: true
Explanation: sentence contains at least one of every letter of the English alphabet.
Example 2:

Input: sentence = "leetcode"
Output: false
 
*/

#include<bits/stdc++.h>
using namespace std;

bool panagram(string s){
  unordered_map<char, int>mpp;
  for(char c: s){
    if(c >= 'a' && c <= 'z'){
      mpp[c - 'a']++;
    }else if(c >= 'A' && c <= 'Z'){
      mpp[c - 'A']++;
    }
  }

  for(auto it: mpp){
    if(it.second != 0){
      return true;
    }
  }
  return false;
}

int main(){
  string sentence = "thequickbrownfoxjumpsoverthelazydog";
  bool pan = panagram(sentence);
  cout<<pan;
}
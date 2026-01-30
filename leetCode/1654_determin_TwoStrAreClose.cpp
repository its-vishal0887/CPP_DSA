#include<bits/stdc++.h>
using namespace std;

bool closeString(string word1, string word2){
  vector<int>freq1(26, 0);
  vector<int>freq2(26,0);
  int m = word1.length(), n = word2.length();

  if(m != n){
    return false;
  }

  for(char c: word1){
    freq1[c - 'a']++;
  }

  for(char c: word2){
    freq2[c - 'a']++;
  }

  for(int i = 0; i<26; i++){
    if((freq1[i] != 0 && freq2[i] != 0)){
      continue;
    }
    if((freq1[i] == 0 && freq2[i] == 0)){
      continue;
    }

    return false;
  }

  sort(freq1.begin(), freq1.end());
  sort(freq2.begin(), freq2.end());

  return freq1 == freq2;
}

int main(){
  string word1 = "abbzzca" ,word2 = "babzzcz";
  bool cStr = closeString(word1, word2);
  cout<<cStr;
}
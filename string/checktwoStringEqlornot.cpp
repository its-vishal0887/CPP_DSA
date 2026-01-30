#include<bits/stdc++.h>
using namespace std;

bool arraystringEqual(vector<string>&word1, vector<string>&word2){
  int m = word1.size(), n = word2.size();
  int w1 = 0, w2 = 0, i= 0, j= 0;
  while(w1 < m && w2 < n){
    if(word1[w1][i] != word2[w2][j]){
      return false;
    }
    i++;
    j++;

    if(i == word1[w1].length()){
      i = 0;
      w1++;
    }

    if(j == word2[w2].length()){
      j = 0;
      w2++;
    }
  }
  if(w1 == m && w2 == n){
    return true;
  }
  return false;
}

int main(){
  vector<string>word1 = {"abc", "dde" ,"fg"};
  vector<string>word2 = {"abcddefg"};
  bool torF = arraystringEqual(word1, word2);
  cout<<torF;
}
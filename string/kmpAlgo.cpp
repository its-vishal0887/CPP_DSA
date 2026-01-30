#include<bits/stdc++.h>
using namespace std;

vector<int>LPS(string str){
  vector<int>pattern(str.length(), 0);
  int i = 1, len = 0;
  while( i < str.length()){
    if(str[i] == str[len]){
      len++;
      pattern[i] = len;
      i++;
    }else{
      if(len != 0){
        len = pattern[len - 1];
      }else{
        pattern[i] = 0;
        i++;
      }
    }
  }
  return pattern;
}

vector<int>kmp(string str, string patt){
  int m = str.length();
  int n = patt.length();
  vector<int>PreCon = LPS(patt);
  vector<int>result;
  

  int i = 0, j = 0;
  while(i < m){
    if(patt[j] == str[i]){
      i++, j++;
    }
    if( j == n){
      result.push_back(i - j);
      j = PreCon[j-1];
    }else if(i<m && patt[j] != str[i]){
      if(j != 0){
        j = PreCon[j - 1];
      }else{
        i++;
      }
    }
  }
  return result;
}

int main(){
  string haystack = "sadbutsad", needle = "sad";
  vector<int>lps = LPS(needle);
  vector<int>KMP = kmp(haystack, needle);
  
  for(int i = 0; i<KMP.size(); i++){
    cout<<KMP[i]<<' ';
  }

}
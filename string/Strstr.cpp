#include<bits/stdc++.h>
using namespace std;

vector<int>buildLPS(string patt){

  int n = patt.length();
  vector<int>result(n, 0);
  int len = 0, i = 1;
  while(i < n){
    if(patt[i] == patt[len]){
      len++;
      result[i] = len;
      i++;
    }
    else{
      if(len != 0){
        len = result[len - 1];
      }else{
        result[i] = 0;
        i++;
      }
    }
  }
  return result;
}

int KMP(string str, string patt){
  vector<int>LPS = buildLPS(patt);
  int i = 0, j = 0;

  int m = str.length(), n = patt.length();

  while(i < m){
    if(str[i] == patt[j]){
      i++, j++;
    }
    if(j == n){
      return i - j;
    }
    else if(i < m && str[i] != patt[i]){
      if(j != 0){
        j = LPS[j - 1];
      }else{
        i++;
      }
    }
  }
  return -1;
}


int main(){
  string haystack = "aabaaabaaac", needle = "aabaaac";
  vector<int>build = buildLPS(needle);
  int kmp = KMP(haystack, needle);
  cout<<kmp<<" ";

}
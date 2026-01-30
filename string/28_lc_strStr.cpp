#include<bits/stdc++.h>
using namespace std;

int strStr(string a, string b){
  int m = a.size(), n = b.size();
  for(int i = 0; i<m-n; i++){
    string str = a.substr(i, n);
    if(str == b){
      return i;
    }
  }
  return -1;
}

int main(){
  string haystack = "sadbutsad", needle = "sad";
  int str = strStr(haystack,needle );
  cout<<str<<" ";
}
#include<bits/stdc++.h>
using namespace std;

  char getMaxChar(string s){
    unordered_map<char, int>mpp(26);

    for(char c: s){
      mpp[c]++;
    }

    int num = 0;
    char ch = s[0];
    
    for(auto it: mpp){
      if(it.second > num){
        num = it.second;
        ch = it.first;
      }
    }
    return ch;
  }

int main(){
  string s = "output";
  char newchr = getMaxChar(s);
  cout<<newchr;
}
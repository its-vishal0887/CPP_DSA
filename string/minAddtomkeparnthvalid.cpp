#include<bits/stdc++.h>
using namespace std;

int minaddToMakeValid(string s){
  int openneed = 0;
  int closeneed = 0;
  for(char c: s){
    if(c == '('){
      closeneed++;
    }else{
      if(closeneed > 0){
        closeneed--;
      }else{
        openneed++;
      }
    }
  }
  return openneed + closeneed;
}

int main(){
  string s = "(((";
  int minadd = minaddToMakeValid(s);
  cout<<minadd<<" ";
}
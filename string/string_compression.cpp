#include<bits/stdc++.h>
using namespace std;

int main(){
  string chars = "aabbccc";
  int n = chars.size();
  int index = 0;

  for(int i = 0; i<n; i++){
    char ch = chars[i];
    int count = 0;

    while(i<n && chars[i] == ch){
      count++;
      i++;
    }

    if(count == 1){
      chars[index++] = ch;
    }
    else{
      chars[index++] = ch;
      string ans = to_string(count);
      for(char dig: ans){
        chars[index++] = dig;
      }
    }
    
    i--;
  }
  chars.resize(index);
  cout<<chars;
}
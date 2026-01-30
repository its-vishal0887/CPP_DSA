#include<bits/stdc++.h>
using namespace std;

string cntndSay(int n){

  if(n == 1){
    return "1";
  }
  string say = cntndSay(n - 1);
  string result = "";
  for(int i = 0; i<say.length(); i++){
    char ch = say[i];
    int cnt = 1;
    while(i < say.length()-1 && say[i] == say[i+1]){
      cnt++;
      i++;
    }
    result += to_string(cnt) + string(1, ch);
  }
  return result;
}

int main(){
  
  string str = cntndSay(4);
  cout<<str<<" ";
}
  


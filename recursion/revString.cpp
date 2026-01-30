#include<bits/stdc++.h>
using namespace std;

void revString(string &str, int i, int j){
  
  if(i > j){
    return;
  }

  swap(str[i], str[j]);

  return revString(str, i+1, j-1);
  
}

int main(){
  string str = "babbar";
  int n = str.length();
  revString(str, 0, n-1);
  cout<<str<<endl;
}
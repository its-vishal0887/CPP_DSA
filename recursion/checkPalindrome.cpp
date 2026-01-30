#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str, int i, int j){
  if(i > j || i == j){
    return true;
  }
  if(str[i] != str[j]){
    return false;
  }
  return checkPalindrome(str, i+1, j-1);
}

int main(){
  string str = "abba";
  int n = str.length() - 1;
  cout<<checkPalindrome(str, 0,n );
}
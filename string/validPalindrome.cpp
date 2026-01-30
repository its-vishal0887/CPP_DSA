#include<bits/stdc++.h>
using namespace std;

bool isValid(char ch){
  if((ch >= 'a' && ch<= 'z') || (ch>='A' && ch<= 'Z') || (ch >= '1' && ch <= '9')){
    return true;
  }else{
    return false;
  }
}

bool validPlindrome(char *s){
  string newS = " ";
  int n = 0;
  int j = strlen(s);
  while(n < j){
    if(isValid(!s[n])){
      n++;
      continue;
    }
    if(isValid(!s[j])){
      j--;
      continue;
    }
    if(isValid(s[n]) != isValid(s[j])){
      return 1;
    }
    n++;
    j--;
  }
  return 0;

}

int main(){
  char s[] = "A man, a plan, a canal: Panama";
  int TorF = validPlindrome(s);
  if(TorF != 1){
    cout<<"It's not valid palindrome!";
  }else{
    cout<<"It's Valid Palindrome";
  }
}
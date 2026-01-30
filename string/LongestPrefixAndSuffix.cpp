#include<bits/stdc++.h>
using namespace std;

string lps(string s){
  int n = s.length();
  vector<int> lpss(n, 0);

  int k = 0;
  for(int i = 1; i<n; i++){
    while(k > 0 && s[k] != s[i]){
      k = lpss[k-1];
    }
    if(s[i] == s[k]){
      k++;
      lpss[i] = k;
    }
  }
  return s.substr(0, lpss[n-1]);
}

int main(){
  string s = "bba";
  string Str = lps(s);
  cout<<Str<<" ";
}
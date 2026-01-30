#include<bits/stdc++.h>
using namespace std;

int Loccurance(string s, char p, int idx, int maxi){
  if(idx > s.length()){
    return maxi;
  }

  char ch = s[idx];
  if(p == ch){
    maxi = max(maxi, idx);
  }

  return Loccurance(s, p, idx+1, maxi);
}

int main(){
  string s = "GEEK";
  char p = 's';
  int occureace = Loccurance(s, p, 0, -1);
  cout<<occureace<<endl;
  return 0;

}
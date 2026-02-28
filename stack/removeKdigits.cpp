#include<iostream>
#include<string>
using namespace std;

string removeKdigits(string &str, int &k){
  int n = str.length();
  string ans = "";

  for(int i = 0; i<n; i++){

    char ch = str[i];
    while(ans.length()> 0 && k>0 && ans.back()> ch){
      ans.pop_back();
      k--;
    }

    if(ans.length() > 0 || ch != '0'){
      ans.push_back(ch);
    }
  }
  
  while(k>0){
    ans.pop_back();
    k--;
  }

  if(ans == ""){
    return "0";
  }
  return ans;
}

int main(){
  string str = "1234";
  int k = 2;

  string ans = removeKdigits(str, k);
  cout<<ans<<endl;

  return 0;
}

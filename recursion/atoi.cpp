#include<iostream>
#include<climits>
#include<string>
using namespace std;

int atoi(string s,long num, int i){

  if(s[i] == ' ') i++;
  int ans =(s[i] == '-')? -1 : 1 ;
  if(s[i] >= '0' && s[i] <= '9'){
    num = num * 10 + (s[i] - '0');
    if(ans * num >= INT_MAX) return INT_MAX;
    if(ans * num <= INT_MIN) return INT_MIN; 
    
  }
  i++;

  if(i == s.length()){
    return ans*num;
  }

  return atoi(s, num, i);
}

int main(){
  string str = " -042";
  int num = atoi(str,0,0 );
  cout<<num<<endl;
}
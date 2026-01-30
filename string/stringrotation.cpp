#include<bits/stdc++.h>
using namespace std;

bool rotation(string s, string goal){
  if(s.size() != goal.size()){
    return 0;
  }
  if((s+s).find(goal) != string::npos){
    return true;
  }
  return false;
  
}

int main(){
  string s = "abcde", goal = "abced";
  int torf = rotation(s, goal);
  if(torf == 1){
    cout<<"True";
  }else{
    cout<<"Flase";
  }
}
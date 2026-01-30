#include<bits/stdc++.h>
using namespace std;

void all_divisor(int n){
  vector<int>ls;
  for(int i = 1; i<=sqrt(n); i++){
    if(n%i == 0){
      ls.push_back(i);
      if(n/i != 1){
        ls.push_back(n/i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for(auto it: ls){
    cout<<it<<" ";
  }
}

int main(){
  int n;
  cout<<"Enter N:";
  cin>>n;

  all_divisor(n);
  return 0;
}
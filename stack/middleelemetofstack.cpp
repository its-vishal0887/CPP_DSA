#include<iostream>
#include<stack>
using namespace std;

void middleele(stack<int>& st, int pos, int ans){
  if(pos == 1){
    ans =  st.top();
    cout<<ans;
    return;
  }
  pos--;
  int temp = st.top();
  st.pop();
  middleele(st, pos, ans); 
  st.push(temp);
}

void getMiddle(stack<int>& st){
  int pos = 0;
  if(st.empty()){
    return;
  }
  else{
    int s = st.size();
    pos = (s % 2 == 0) ? (s/2) : (s/2)+1;
  }
  middleele(st, pos, -1);
}

int main(){
  stack<int>st;
  st.push(10);
  st.push(78);
  st.push(89);
  st.push(75);
  
  getMiddle(st);
  return 0;
}
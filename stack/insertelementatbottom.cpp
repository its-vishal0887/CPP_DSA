#include<iostream>
#include<stack>
using namespace std;

void insertBottom(stack<int>& st, int pos, int ans){
  if(pos == 0){
    st.push(ans);
    return;
  }
  pos--;
  int temp = st.top();
  st.pop();
  insertBottom(st, pos, ans); 
  st.push(temp);
}

void getSize(stack<int>& st, int ans){
  int pos = st.size();
  if(st.empty()){
    return;
  }
  insertBottom(st, pos, ans);
}

void printstack(stack<int> st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
}

int main(){
  stack<int>st;
  st.push(10);
  st.push(78);
  st.push(89);
  st.push(75);
  int ans = 400;
  getSize(st, ans);
  printstack(st);
  return 0;
}
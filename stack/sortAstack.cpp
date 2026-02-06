#include<iostream>
#include<stack>
using namespace std;

void insert(stack<int>&st, int ans){
  if(st.empty() || ans > st.top()){
    st.push(ans);
    return;
  }

  int temp = st.top();
  st.pop();

  insert(st, ans);

  st.push(temp);
}

void emptystack(stack<int> &st){
  if(st.empty()){
    return;
  }
  int ans = st.top();
  st.pop();
  emptystack(st);
  insert(st, ans);
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
  emptystack(st);
  printstack(st);
  return 0;
}
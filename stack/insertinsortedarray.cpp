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

void print(stack<int>st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }cout<<endl;
}

int main(){
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);
  st.push(40);
  insert(st, 25);
  insert(st,2);
  insert(st, -1);
  // insert(st,5);
  // insert(st,3); 
  print(st);
}
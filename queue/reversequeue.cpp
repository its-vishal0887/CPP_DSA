#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void revqueue(queue<int> &q){
  stack<int>st;
  while(!q.empty()){
    int ele = q.front();
    q.pop();
    st.push(ele);
  }

  while(!st.empty()){
    int ele = st.top();
    st.pop();
    q.push(ele);
  }

}

void print(queue<int>q){
  while(!q.empty()){
    int ele = q.front();
    q.pop();
    cout<<ele<<" ";
  }
}

int main(){
  queue<int>q;
  q.push(1);
  q.push(2);
  q.push(3);
  revqueue(q);
  print(q);
  return 0;

}
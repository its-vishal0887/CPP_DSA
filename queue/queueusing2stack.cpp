#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class MyQueue{
  stack<int>st1,st2;
public:
  MyQueue(){

  }
  void push(int x){
    st1.push(x);
  }
  int pop(){
    if(st2.empty()){
      while(!st1.empty()){
        int ele = st1.top();
        st2.push(ele);
        st1.pop();
      }
    }
    st2.pop();
    return st2.top();
  }

  bool empty(){
    return st2.empty() && st1.empty();
  }
  
  int peek(){
    if(st2.empty()){
      while(!st1.empty()){
        st2.push(st1.top());
        st1.pop();
      }
    }
    return st2.top();
  }

};

int main(){
  MyQueue q;
  q.push(4);
  q.push(7);

  q.peek();
}
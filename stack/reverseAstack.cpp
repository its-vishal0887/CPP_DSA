// #include <iostream>
// #include <stack>
// using namespace std;

// void insertatbottom(stack<int> &st, int pos, int ans){
//   if(pos == 0){
//     st.push(ans);
//     return;
//   }
//   pos--;
//   int temp = st.top();
//   st.pop();
//   insertatbottom(st, pos, ans);
//   st.push(temp);
// }

// void revstack(stack<int> &st, int pos)
// {
//   int temp = st.top();
//   if(!st.empty()){
//     pos++;
//     st.pop();
//   }
//   insertatbottom(st, pos, temp);
// }


// void print(stack<int>st){
//   while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
//   }
//   cout<<endl;
// }

// int main()
// {
//   stack<int> st;
//   int pos = 1;
//   st.push(15);
//   st.push(52);
//   st.push(5);
//   st.push(78);
//   st.push(56);
//   print(st);

//   revstack(st, pos);
//   print(st);
//   return 0;
// }

#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st, int pos, int ans){
  if(pos == 0){
    st.push(ans);
    pos++;
    return;
  }
  pos--;
  int temp = st.top();
  st.pop();
  insertAtBottom(st, pos, ans);
  st.push(temp);
}

void revStack(stack<int>& st, int pos){
  if(pos == 0){
    return;
  }

  pos--;
  int temp = st.top();
  st.pop();
  revStack(st, pos);
  insertAtBottom(st, pos, temp);
}

void print(stack<int>st){
  while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
  }
  cout<<endl;
}

int main(){
  stack<int>st;
  st.push(10);
  st.push(78);
  st.push(89);
  st.push(75);
  int pos = st.size();
  print(st);
  revStack(st, pos);
  print(st);

  return 0;
}
// STL CREATION
#include<iostream>
#include<stack>
using namespace std;

int main(){
  stack<int>st;
  st.push(10);
  st.push(20);
  st.push(30);

  st.pop();

  if(st.empty()){
    cout<<"Stack Is Empty !!"<<endl;
  }
  else{
    cout<<st.top()<<endl;
  }

  return 0;
}
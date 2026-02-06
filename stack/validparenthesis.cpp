#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string str){
  stack<char>st;
  int n = str.length();
  int i = 0;
  int cnt = 0;
  while(i < n){
    if(str[i] == '(' || str[i] == '[' || str[i] == '{'){
      st.push(str[i]);
      
    }
    if(str[i] == ')'){
      if(st.top() != '('){
        return false;
      }
      st.pop();
    }
    if(str[i] == '}'){
      if(st.top() != '}'){
        return false;
      }
      st.pop();
    }
    if(str[i] == ']'){
      if(st.top() != ']'){
        return false;
      }
      st.pop();
    }
    i++;
  }
  return true;
}

int main(){
  string str =  "(([)])";
  if(validParenthesis(str)){
    cout<<"valid"<<endl;
  }
  else{
    cout<<"not valid"<<endl;
  }
  return 0;
}
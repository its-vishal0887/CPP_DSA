#include <iostream>
#include <stack>
using namespace std;

bool redundentBracket(string s)
{
  stack<char>st;
  for(int i = 0; i<s.length(); i++){
    char ch = s[i];

    if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
      st.push(ch);
    }
    else if(ch == ')'){
      int operatorcnt = 0;
      while(!st.empty() && st.top() != '('){
        char temp = st.top();
        if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
          operatorcnt++;
        }
        st.pop();
      }
      if(operatorcnt == 0){
        return true;
      }
    }
  }
  return false;
}

int main()
{
  string str = "((a+b))";
  bool res = redundentBracket(str);
  if(res == true){
    cout<<"expression is not redundant !!";

  }else{
    cout<<"expression is redundant !!";
  }
  return 0; 
}
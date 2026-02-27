#include <iostream>
#include <stack>
#include <string>
using namespace std;

int prioritiy(char s)
{
  if (s == '^')
    return 3;
  if (s == '/' || s == '*')
    return 2;
  if (s == '+' || s == '-')
    return 1;

  return -1;
}

// string infixTopostfix(string &str)
// {
//   int i = 0;
//   string ans = "";
//   stack<char> st;
//   while (i < str.length())
//   {
//     if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
//     {
//       ans += str[i];
//     }
//     else if (str[i] == '(')
//     {
//       st.push(str[i]);
//     }
//     else if (str[i] == ')')
//     {
//       while (!st.empty() && st.top() != '(')
//       {
//         ans += st.top();
//         st.pop();
//       }
//       st.pop();
//     }
//     else
//     {
//       while (!st.empty() &&
//              ((str[i] != '^' && prioritiy(str[i]) <= prioritiy(st.top())) ||
//               (str[i] == '^' && prioritiy(str[i]) < prioritiy(st.top()))))
//       {
//         ans += st.top();
//         st.pop();
//       }
//       st.push(str[i]);
//     }

//     i++;
//   }
//   while (!st.empty())
//   {
//     ans += st.top();
//     st.pop();
//   }

//   return ans;
// }

// int main()
// {
//   string s = "hm^q^74-^";
//   string ans = infixTopostfix(s);
//   cout << ans << endl;
// }
class Solution
{
public:
  int prt(char s)
  {
    if (s == '^')
      return 3;
    if (s == '/' || s == '*')
      return 2;
    if (s == '+' || s == '-')
      return 1;

    return -1;
  }
string infixToPostfix(string &s)
  {
    // code here
    int i = 0;
    stack<char> st;
    string ans = "";

    while (i < s.length())
    {
      if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
      {
        ans += s[i];
      }
      else if (s[i] == '(')
      {
        st.push(s[i]);
      }
      else if (s[i] == ')')
      {
        while (!st.empty() && st.top() != '(')
        {
          ans += st.top();
          st.pop();
        }
        st.pop();
      }
      else
      {
        while (!st.empty() && ((ans[i] != '^' && prt(str[i]) <= prt(st.top())) || (str[i] == '^' && prioritiy(str[i]) < prioritiy(st.top()))))
        {
          ans += st.top();
          st.pop();
        }
        st.push(str[i]);
      }

      i++;
    }
    while (!st.empty())
    {
      ans += st.top();
      st.pop();
    }
    return ans;
  }
};

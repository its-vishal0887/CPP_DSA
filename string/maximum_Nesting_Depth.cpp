/*
Example 1:

Input: s = "(1+(2*3)+((8)/4))+1"

Output: 3

Explanation:

Digit 8 is inside of 3 nested parentheses in the string.

Example 2:

Input: s = "(1)+((2))+(((3)))"

Output: 3

Explanation:

Digit 3 is inside of 3 nested parentheses in the string.

Example 3:

Input: s = "()(())((()()))"

Output: 3
*/

#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s){
  int depth = 0;
  int maxDepth = 0;
  for(char c: s){
    if(c == '('){
      depth++;
      maxDepth = max(depth, maxDepth);
    }else if(c == ')'){
      depth--;
    }
  }
  return maxDepth;
}

int main(){
  string  s = "(1)+((2))+(((3)))";
  int maxi = maxDepth(s);
  cout<<maxi;
}
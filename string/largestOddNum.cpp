#include <bits/stdc++.h>
using namespace std;

string oddnum(string s)
{
  //  for(int i = 0; i<s.size(); i++){
  //   int digit = s[i] - '0';
  //   if(digit % 2 != 0){
  //     maxi = max(maxi, digit);
  //   }
  //  }
  int cnt = 0;
  int i = 0;
  while (i < s.size())
  {
    int digit = s[i] - '0';
    if (digit % 2 != 0)
    {
      cnt = i+1;
    }
    i++;
  }
  s.resize(cnt);
  return s;
}

int main()
{
  string newS = "52";
  string newSize = oddnum(newS);
  for (int i = 0; i < newSize.size(); i++)
  {
    cout << newSize[i] << " ";
  }
}
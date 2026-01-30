#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int palindrome(int n)
{
  int max = 0;
  int ln = n;
  while (n != 0)
  {
    int lastDigit = n % 10;
    max = (max * 10) + lastDigit;
    n = n / 10;
  }
  if (max == ln)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  int n;
  cout << "Entre N:";
  cin >> n;
  int palindromee = palindrome(n);

  if (palindromee == 0)
  {
    cout << "Given Interger Is Plaindrome";
  }
  else
  {
    cout << "Error";
  }
  return 0;
}
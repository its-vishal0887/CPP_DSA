#include <iostream>
using namespace std;

const int M = 1e9 + 7;
int findPow(long long a, long long b)
{
  if (b == 0)
    return 1;
  long long half = findPow(a, b / 2);
  long long result = (half * half) % M;
  if (b % 2 == 1)
    result = (result * a) % M;
  return result;
}
int main(){
  long long n = 5;
 
  long long num = (long long)findPow(5, (n + 1) / 2) * findPow(4, (n / 2)) % M;
  cout<<num<<endl;
  return 0;
}
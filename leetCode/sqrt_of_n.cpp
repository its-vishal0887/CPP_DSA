#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int sqrt_Of_n(double n){
  return round(exp(0.5 * log(n)));
}

int main(){
  int sqr = sqrt_Of_n(25);
  cout<<sqr<<endl;
}
// #include<iostream>
// using namespace std;

// void countDigit(int max){
//   while(max > 0){
//     int lastDigit = max % 10;
//     cout<<lastDigit<<endl;
//     max = max/10;
//   }
// }

// int main(){
//   int n;
//   cout<<"enter N:";
//   cin>>n;
//   countDigit(n);
//   return 0;
// }

//TC is O(log(N))

#include<iostream>
using namespace std;

int countDigit(int n){
  int count = 0;
  int max = n;
  while(n > 0){
    int lastDigit = n % 10;
    if(max % lastDigit == 0){
      count++;
    }
    n = n / 10;
  }
  return count;
}

int main(){
  int n;
  cout<<"enter N:";
  cin>>n;
  int val = countDigit(n);
  cout<<val<<endl;
  return 0;
}
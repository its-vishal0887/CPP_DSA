#include<iostream>
using namespace std;

void fibonacci(int num_1, int num_2){
  int sum = num_1 + num_2;

  // base case (stop when next term >= 100)
  if(sum >= 300){
    cout << sum << " ";
    return;
  }

  cout << sum << " ";

  // recursive call with shifted terms
  fibonacci(num_2, sum);
}

int main(){
  cout << 0 << " " << 1 << " ";
  fibonacci(0, 1);
  return 0;
}

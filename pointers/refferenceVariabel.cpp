#include<bits/stdc++.h>
using namespace std;

void Update(int &n){ //&n then it is refference var || n then it is make new copy
  n++;
}

int main(){
  int n = 5;
  cout<<"Befor Updating: "<<n<<endl;

  Update(n);
  cout<<"After Updating: "<<n<<endl;
}
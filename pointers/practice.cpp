#include<iostream>
using namespace std;

int main(){
  int arr[5] = {10,20,30,40,50};
  // cout<<"Arr "<<arr<<endl;
  // cout<<"&arr "<<&arr<<endl;
  // cout<<"arr[0] "<<arr[0]<<endl;
  // cout<<"&arr[0] "<<&arr[0]<<endl;
  // cout<<"*(arr) "<<*(arr)<<endl;
  // cout<<"*arr + 1 "<<*arr+ 1<<endl;
  // cout<<"*(arr) + 1 "<<*(arr)+ 1<<endl;
  // cout<<"*(arr + 1) "<<*(arr+1)<<endl;
  // cout<<"*(arr + 2) "<<*(arr+2)<<endl;
  // cout<<"*(arr + 3) "<<*(arr+3)<<endl;

  int* p = arr;
  int *q = (arr + 1);

  cout<<"arr "<<arr<<endl;
  cout<<"&arr "<<&arr<<endl;
  cout<<"arr[0] "<<arr[0]<<endl;
  cout<<"&arr[0] "<<&arr[0]<<endl;
  cout<<"p "<<p<<endl;
  cout<<"&p "<<&p<<endl;
  cout<<"*p "<<*p<<endl;
  cout<<"q "<<q<<endl;
  cout<<"&q "<<&q<<endl;
  cout<<"*q "<<*q<<endl;
  cout<<"*p + 1 "<<*p + 1 <<endl;
  cout<<"*(p) + 2"<<*(p)+2<<endl;
  cout<<"*(q) + 2"<<*(q) + 2<<endl;
  cout<<"*(q + 4) "<<*(q + 4)<<endl;

}
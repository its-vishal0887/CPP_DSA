#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>vec;
  vec.push_back(1);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.push_back(9);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  vec.push_back(9);
  // vec.pop_back();
  // vec.pop_back();

  // vec.erase(vec.begin());
  // vec.erase(vec.begin() + 1);

  vec.insert(vec.begin()+2, 5);
  // vec.clear();

  cout<<"last Val: "<< *(vec.end()-1) <<endl;

  cout<<"is Empty :"<<vec.empty()<<endl;

  cout<<vec.size()<<endl; //size() = actual no of element in vector
  cout<<vec.capacity()<<endl; //capacity of vector to store elements

  // for(int val : vec){
  //   cout<<val<<" ";
  // } //for each loop
  // cout<<endl;
  return 0;
}
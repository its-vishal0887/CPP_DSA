#include<iostream>
#include<map>
using namespace std;

int main(){
  int n;
  cout<<"Enter Size:";
  cin>>n;
  int arr[n];

  map<int , int>mpp;
  for(int i = 0; i<n; i++){
    cin>>arr[i];
    mpp[arr[i]]++;
  }

  // for(auto it: mpp){
  //   cout<<it.first<<"->"<<it.second<<endl;
  // }

  int q;
  cout<<"Enter Querys:";
  cin>>q;
  while(q--){
    int num;
    cout<<"Enter Num ->";
    cin>>num;

    cout << "Frequency of " << num << " = " << mpp[num] << endl;
  }
  
  

}
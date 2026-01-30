#include<bits/stdc++.h>
using namespace std;

bool isogram(string s){

  int arr[26];

  for(char c: s){
    int index = c - 'a';
    if(arr[index] > 1){
      return false;
    }
    arr[index]++;
  }
  return true;
}

int main(){
  string str = "geeks";
  char st = isogram(str);

  if(st != 1){
    cout<<;
  }else{
    cout<<"False";
  }

}
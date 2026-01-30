#include<bits/stdc++.h>
using namespace std;

int getLengt(char name[]){
  int cnt = 0;
  for(int i = 0; name[i] != '\0'; i++){
    cnt++;
  }
  return cnt;
}
void reverse(char name[], int n){
  int i = 0;
  int j = n-1;
  while(i < j){
    swap(name[i], name[j]);
    i++;
    j--;
  }
}
int main(){
  char name[] = "Vishal";
  int size = getLengt(name);
  cout<<"Reverse String:";
  reverse(name, size);
  cout<<name;
}
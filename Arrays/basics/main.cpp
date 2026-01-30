#include <bits/stdc++.h>
using namespace std;

void add(int a, int b){
  int c = a+b;
  if(c<=10){
    cout<<c<<endl;
    add(c,b);
  }
}

int main(){
  // int a = 10;
  // cout<<a<<endl;


  // string str;
  // getline(cin,str);
  // cout<<str<<endl; // No errors found.

  // int day;
  // cout<<"Enter Day"<<endl;
  // cin>>day;

  // switch(day){
  //   case 1:
  //     cout<<"Monday"<<endl;
  //     break;
    
  //   case 2:
  //     cout<<"Tuesday"<<endl;
  //     break;
    
  //   case 3:
  //     cout<<"Wednesday"<<endl;
  //     break;
    
  //   case 4:
  //     cout<<"Thursday"<<endl;
  //     break;
    
  //   case 5:
  //     cout<<"Friday"<<endl;
  //     break;
    
  //   case 6:
  //     cout<<"Saturday"<<endl;
  //     break;
    
  //   case 7:
  //     cout<<"Sunday"<<endl;
  //     break;
    
  //   default:
  //     cout<<"Invalid Input"<<endl;
  // }
  // return 0;

  // string str = "Vishal Sarvade";
  // int len = str.length();
  // str[len -1]= 'V';
  // cout<<str[len-1]<<endl;
  // return 0;

  // for(int i = 1; i<=10; i++){
  //   cout<<i<<" "<<"Vishal"<<endl;
  //   cout<<j<<endl;
  // }

  add(0,1);
  
}
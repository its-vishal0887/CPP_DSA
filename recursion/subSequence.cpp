#include<bits/stdc++.h>
using namespace std;

// int totalSubSeq(string s, int length){
//   if(length < 1){
//     return 1;
//   } 
//   int subSeq = 2 * totalSubSeq(s, length-1);

//   return subSeq;

// }

void allSubSeq(string input, string output, int index){
  if(index >= input.length()){
    cout<<output<<endl;
    return;
  }

  char ch = input[index];

  //exclude;
  allSubSeq(input, output, index+1);

  //include;
  output.push_back(ch);
  allSubSeq(input, output, index+1);
}

int main(){
  // string s = "abcdefgh";
  // int len = s.length();
  // int subSeq = totalSubSeq(s,len);
  // cout<<subSeq<<endl;

  string input = "abc";
  string output = "";
  allSubSeq(input, output, 0);

  return 0;

}
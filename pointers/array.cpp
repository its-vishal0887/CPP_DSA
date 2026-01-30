#include<iostream>
using namespace std;

/* -> if i = 3;
      then i[arr] = *(i + arr)
      hamesha arr[i] = *(arr+i) hota hai to iska ulta i[arr] likha to *(i + arr) hota hai
   -> size of pointer is 8 .
    -> address store karne ke liye 8 byte memory chahiya hoti hai.
    -> 
      */

int main(){
 /* int arr[10] = {1,2};
  int i = 1;
  cout<<i[arr]<<" ";
  cout<<*(arr+1);
  */
//  int arr[10];
//  char ch[7] = "Vishal";
//  char ptr = *ch;
//  cout<<ptr<<endl;
//  cout<<ch;

//  cout<<"->"<<(&arr[0]+1)<<endl;
//  int *ptr = &arr[0];
//  ptr = ptr + 1;
//  cout<<"->"<<ptr;
  // int i = 5;
  // int*ptr = &i;
  // int**ptr2 = &ptr;
  // int***ptr3 = &ptr2;
  // cout<<"->"<<ptr3<<endl;
  // cout<<ptr<<endl; //Points address of i
  // cout<<*ptr2<<endl; //Points Address of i
  // cout<<ptr2; //Points Address of ptr

  // int a = 5;
  // int *ptr = &a;
  // cout<<sizeof(ptr)<<endl;
  
  // char ch = 'k';
  // char *ptrr = &ch;
  // cout<<sizeof(ptrr)<<endl;

  // long lach = 10;
  // long *ptre = &lach;
  // cout<<sizeof(ptre);
  int arr[3] = {10,20,30};
  int (*p)[3] = &arr;
  cout<<*p<<endl;

}
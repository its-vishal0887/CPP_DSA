#include<iostream>
using namespace std;

class Stack{
  public:
    int* arr;
    int top1;
    int top2;
    int size;


    Stack(int size){
      arr = new int[size];
      this->size = size; 
      this->top1 = -1;
      this->top2 = size;
    }

    void push1(int data){
      if(top2 - top1 == 1){
        cout<<"stack is overflow !!"<<endl;
        return;
      }
      top1++;
      arr[top1] = data;
    }

    void push2(int data){
      if(top2 - top1 == 1){
        cout<<"stack is overflow !!"<<endl;
        return;
      }
      top2--;
      arr[top2] = data;
    }

    void pop1(){
      if(top1 == -1){
        cout<<"stack is underflow !!"<<endl;
        return;
      }
      
      arr[top1] = 0;
      top1--;
    }

    void pop2(){
      if(top2 == size){
        cout<<"stack is overflow !!"<<endl;
        return;
      }
      
      arr[top2] = 0;
      top2++;
    }
    
    int getSize(){
      return size;
    }

    void print(){
      for(int i = 0; i<getSize(); i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};



int main(){
  Stack st(10);
  st.push1(10);
  st.push1(10);
  st.push1(10);
  st.push1(10);
  st.push2(20);
  st.push2(20);
  st.push2(20);
  st.push2(20);
  st.push2(20);
  st.push2(20);
  st.pop1();
  st.pop2();
  st.pop1();
  st.pop2();
  st.push1(40);
  st.push2(100); 
  st.print();

}
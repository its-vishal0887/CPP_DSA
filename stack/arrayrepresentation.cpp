// IMPLEMENTATION uisng array

#include <iostream>
using namespace std;

class Stack{

  public:
    int* arr;
    int size;
    int top;

    Stack(int size){
      arr = new int[size];
      this->size = size;
      this->top = -1;
    }

    void push(int data){
      if(isFull()){
        cout<<"Stack Is OverFlow !!"<<endl;
      }
      else{
        top++;
        arr[top] = data;
      }

    }

    void pop(){
      if(isEmpty()){
        cout<<"Stack is Underflow !!"<<endl;
      }
      else{
        top--;
      }
    }

    bool isEmpty(){
      if(top == -1){
        return true;
      }
      else{
        return false;
      }
    }


    int getSize(){
      return top + 1;
    }

    bool isFull(){
      if(top == size-1){
        return true;
      }
      else{
        return false;
      }
    }

    int getTop(){
      if(isEmpty()){
        cout<<"Stack is empty: "<<endl;
      }
      else{
        int ele =  arr[top];
        return ele;
      }

    }

    void print(){
      cout<< "stack:-> ";
      for(int i =0; i<getSize(); i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }

};


int main()
{
  Stack st(5);
  st.push(12);
  st.push(15);
  st.push(50);
  st.push(50);
  st.push(50);
  st.print();

}


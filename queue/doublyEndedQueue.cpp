#include<iostream>
#include<deque>
using namespace std;

class deque{
  public: 
    int *arr;
    int size;
    int front;
    int rear;

    deque(int size){
      arr = new int[size];
      this->size = size;
      front = -1;
      rear = -1;
    }

    bool isFull(){
      if(rear == size-1 && front == 0){
        return true;
      }
      else{
        return false;
      }
    }

    bool isEmpty(){
      if(front == -1 && rear == -1){
        return true;
      }
      else{
        return false;
      }
    }

    void push_front(int val){
      if(front == 0){
        cout<<"Overflow !!"<<endl;
      }
      else if(front == -1 && rear == -1){
        front++;
        rear++;
        arr[front] = val;
      }
      else{
        front--;
        arr[front] = val; 
      }
    }

    void push_back(int val){
      // overflow
      // empty case
      // normal cond.

      if(rear == size-1){
        cout<<"overflow !!"<<endl;
        return;
      }
      else if(isEmpty()){
        front++;
        rear++;
        arr[rear] = val;
      }
      else{
        rear++;
        arr[rear] = val;
      }
    }

    void pop_front(){
      if(front == -1 && rear == -1){
        cout<<"underflow !!"<<endl;
      }
      else if(front == rear){
        arr[front] = -1;
        front = -1;
        rear = -1;
      }
      else{
        arr[front] = -1;
        front++;
      }
    }

    void pop_back(){
      if(front == -1 && rear == -1){
        cout<<"underFlow !!"<<endl;
      }
      else if(front == rear){
        arr[rear] = -1;
        front = -1;
        rear = -1;
      }
      else{
        arr[rear] = -1;
        rear--;
      }
    }
}
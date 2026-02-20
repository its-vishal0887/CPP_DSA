#include<iostream>
using namespace std;

class cir_queue{
  public:
  int *arr;
  int size;
  int front;
  int rear;

  cir_queue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;
  }

  bool isNull(){
    if(front == -1 && rear == -1){
      return true;
    }
    else{
      return false;
    }
  }

  bool isFull(){
    if((front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1))) {
      return true;
    }
    else{
      return false;
    }
  }

  void push(int ele){
    if(isFull()){
      cout<<"Queue is overflow !!";
      return;
    }
    else if(rear == size - 1 && front != 0) {
      rear = 0;
      arr[rear] = ele;
    }
    else if(isNull()) {
      front++;
      rear++;
      arr[rear] = ele;
    }
    else{
      rear++;
      arr[rear] = ele;
    }
  }

  void pop(){
    if(isNull()){
      cout<<"Queue is underflow"<<endl;
      return;
    }
    else if(front == rear ){
      arr[rear] = -1;
      front = -1;
      rear = -1;
    }
    else if(front == size - 1) {
      arr[front] = -1;
      front = 0;
    }
    else{
      arr[front] = -1;
      front++;
    }
  }

  void print(){
    for(int i = 0; i<size; i++){
      cout<<arr[i]<<" ";
    }
  }
};

int main(){
  cir_queue q(5);
  q.push(6);
  q.push(8);
  q.push(7);
  q.push(78);
  q.push(87);
  q.pop();
  q.push(47);
  q.pop();
  q.pop();
  q.push(45);
  q.push(23);
  q.push(45);
  
  q.print();
  return 0;
  
}
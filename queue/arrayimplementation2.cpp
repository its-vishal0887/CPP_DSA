#include<iostream>
using namespace std;

class queue{
  public:
    int *arr;
    int size;
    int rear;
    int front;
    
    queue(int size){
      arr = new int[size];
      this->size = size;
      this->rear = -1;
      this->front = -1;
    }

    bool isEmpty(){
      if(front == -1){
        return true;
      }
      else{
        return false;
      }
    }

    bool isFull(){
      if(rear == size-1){
        return true;
      }
      else{
        return false;
      }
    }

    void push(int ele){
      if(isFull()){
        cout<<"queue is overFlow !!";
      }
      else{
        if(isEmpty()) front = 0;
        rear++;
        arr[rear] = ele;
      }
    }

    void pop(){
      if(isEmpty()){
        cout<<"queue is underflow !!"<<endl;
      }
      else if(front == rear){
        front = rear = -1;
      }
      else{
        front++;
      }
    }

    int getSize(){
      if(front == rear){
        return 1;
      }
      else {
        return rear - front + 1;
      }
    }

    int getFirst(){
      if(isEmpty()) return 0;
      return arr[front];
    }

    int getEnd(){
      if(isEmpty()) return 0;
      return arr[rear];
    }

    void print(){
      if(isEmpty()){
        cout << "Queue is empty";
        return;
      }
      for(int i = 0; i <size; i++){
        cout<<arr[i]<<" ";
      }
    }
};

int main(){
  queue q(5);
  q.push(1);
  q.push(1);



  q.print();
  
}
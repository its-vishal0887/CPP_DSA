#include<iostream>
using namespace std;

class queue{
  public:
    int *arr;
    int size;
    int front;
    int rear;

    queue(int size){
      arr = new int[size];
      this->size = size;
      this->front = -1;
      this->rear = -1;
    }

    bool isFull(){
      if(rear == size - 1){
        return true;
      }
      else{
        return false;
      }
    }

    bool isEmpty(){
      if(front == -1){
        return true;
      }
      else{
        return false;
      }
    }

    void push(int element){
      if(isFull()){
        cout<<"queue is overflow !!"<<endl;
      }
      else{
        if(isEmpty()) front = 0;
        rear++;
        arr[rear] = element;
      }
    }

    void pop(){
      if(isEmpty()){
        cout<<"queue is underflow !!"<<endl;
      }
      else{
        if(front == rear){
          front = rear = -1;
        }
        else{
          front++;
        }
      }
    }

    int getFront(){
      if(isEmpty()) return -1;
      return arr[front];
    }

    int getEnd(){
      if(isEmpty()) return -1;
      return arr[rear];
    }

    int getSize(){
      if(isEmpty()) return 0;
      return rear - front + 1;
    }

    void print(){
      if(isEmpty()) return;
      for(int i = front; i <=rear; i++){
        cout<<arr[i]<<" ";
      }
      cout<<endl;
    }
};

int main(){
  queue q(5);

  q.push(5);
  q.push(6);
  q.pop();
  q.print();
  // cout<<q.getSize()<<endl;
}
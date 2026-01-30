#include<bits/stdc++.h>
using namespace std;


class Node{
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

class LinkedList{
  public:
  Node* head;
  Node* Tail;

  LinkedList(){
    head = NULL;
    Tail = NULL;
  }


  void insertATHead(int data){
  Node* ptr = new Node(data);
  if(head == NULL && Tail == NULL){
    head = Tail = ptr;
  }
  else{
    Tail->next = ptr;
    Tail= ptr;
  }
}

void print(){
  Node *ptr = head;
  while(ptr != NULL){
    cout<<ptr->data<<endl;
    ptr = ptr->next;
  }

}

void inserAtTail(int data){
  Node* ptr = new Node(data);
  if(head == NULL){
    head = Tail = ptr;
  }
  else{
    Tail->next = ptr;
    Tail = ptr;
  }
}

};





int main(){
  LinkedList ll;

  ll.inserAtTail(5);
  ll.inserAtTail(6);
  ll.print();

}

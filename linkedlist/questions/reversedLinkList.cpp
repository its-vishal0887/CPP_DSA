#include<iostream>
using namespace std;

class Node{
  public:
  int data;
  Node* next;

  Node(){
    this->next = NULL;
  }

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<endl;
}
//5->10->15->20->25->
void reversedLl(Node* &head){
  Node* prev = NULL;
  Node* curr = head;
  Node* newNode = head;
  while(curr != NULL){
    newNode = newNode->next;
    curr->next = prev;
    prev = curr;
    curr = newNode;
  }
  head = prev;
}

int main(){
  Node* a = new Node(5);
  Node* b = new Node(10);
  Node* c = new Node(15);
  Node* d = new Node(20);
  Node* e = new Node(25);

  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = NULL;

  Node* head = a;

  print(head);

  reversedLl(head);

  print(head);


  
}
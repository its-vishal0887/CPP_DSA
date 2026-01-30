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

int length(Node* head){
  Node* temp = head;
  int cnt = 0;
  while(temp != NULL){
    cnt++;
    temp = temp->next;
  }
  return cnt;
}


void deletemid(Node* &head){
  int len = length(head);
  int mid = len / 2;
  Node* prev = head;
  int i = 0;
  while(i < mid - 1){
    prev = prev->next;
    i++;
  }
  Node* temp = prev->next;
  prev->next = temp->next;
  delete(temp);
}


void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
}

int main(){
  Node* a = new Node(5);
  Node* b = new Node(10);
  Node* c = new Node(15);
  Node* d = new Node(20);
  Node* e = new Node(25);
  Node* f = new Node(30);

  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  f->next = NULL;

  Node* head = a;
  print(head);
  cout<<endl;
  deletemid(head);
  print(head);
}
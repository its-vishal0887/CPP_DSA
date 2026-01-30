#include<bits/stdc++.h>
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


void middoflist(Node* head){
  Node* slow = head;
  Node* fast = head;

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
      slow = slow->next;
    }
    
  }
  cout<<slow->data<<endl;
}


void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<"->";
    temp = temp->next;
  }
  cout<<endl;
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
  // int len = length(head);
  middoflist(head);
  
  return 0;
}
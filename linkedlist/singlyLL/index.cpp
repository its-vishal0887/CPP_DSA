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
    cout<<temp->data<<endl;
    temp = temp->next;
  }
}

void insertAtHead(Node* &head, Node* &tail, int data)
{
  if(head == NULL){
    Node* temp = new Node(data);
    head = temp;
    tail = temp;
  }
  else{
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
  }
  
}

void inserAtTail(Node* &head, Node* &tail, int data){
  if(head == NULL){
    Node* temp = new Node(data);
    head = temp;
    tail = temp;
  }
  else{
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
  }
}

int length(Node* head){
  Node* temp = head;
  int cnt = 1;
  while(temp != NULL){
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

void insertAtMid(Node* &head, Node* &tail, int data, int pos){
  Node *temp = new Node(data);
  int len = length(head); 
  if(pos <= 1){
    insertAtHead(head, tail, data);
  }
  else if(pos == len+1){
    inserAtTail(head, tail, data);
  }
  else{
    int i = 1;
    Node* curr = head;
    Node* q = head->next;
    while(i < pos-1){
      curr = curr->next;
      q = q->next;
      i++;
    }
    curr->next = temp;
    temp->next = q;
  }
}

int main(){
  // Node a;
  Node* head = NULL;
  Node* tail = NULL;

  insertAtHead(head, tail, 78);
  inserAtTail(head, tail, 77);
  inserAtTail(head, tail , 89);
  inserAtTail(head, tail, 52);
  inserAtTail(head, tail, 100);
  insertAtMid(head, tail, 24, 6);
  print(head);
  // Node* a = new Node(5);
  // Node* b = new Node(10);
  // Node* c = new Node(15);
  // Node* d = new Node(20);
  // Node* e = new Node(25);

  // a->next = b;
  // b->next = c;
  // c->next = d;
  // d->next = e;
  // e->next = NULL;



  // insertAtHead(a,e,  4);
  // inserAtTail(a, e, 89);


  // print(a);


  return 0;
}
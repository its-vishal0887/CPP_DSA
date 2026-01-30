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

void insertFromHead(Node* &head, Node* &tail, int data){
  Node* temp = new Node(data);
  if(head == NULL){
    head = temp;
    tail = temp;
  }else{
    temp->next = head;
    head = temp;
  }
  
}

void inserFromTail(Node* &head, Node* &tail, int data){
  Node* temp = new Node(data);
  if(head == NULL){
    head = tail = temp;
  }
  else{
    tail->next = temp;
    tail = temp;
  }
}

int length(Node* head){
  Node* temp = head;
  int cnt = 0;
  while(temp != NULL){
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

void insertFromMid(Node* &head, Node* &tail, int data, int pos){
  int len = length(head);
  Node* temp = new Node(data);
  if(head == NULL){
    head = tail = temp;
  }
  if(pos <= 1){
    insertFromHead(head,tail, data);
  }else if(pos >= len){
    inserFromTail(head, tail, data);
  }
  else{
    int i = 1;
    Node* curr = head->next;
    Node* prev = head;
    while(i < pos-1){
      prev = prev->next;
      curr = curr->next;
      i++;
    }
    prev->next = temp;
    temp->next = curr;
  }
}

void print(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
}

void deleteHead(Node* &head){
  if(head == NULL){
    cout<<"NOPE..!"<<endl;
    return;
  }else{
    Node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete(temp);
  }

}

void deleteTail(Node* &head, Node* &tail){
  if(head == NULL){
    cout<<"NOPE..!"<<endl;
    return;
  }
  Node* prev = head;
  Node* curr = head->next;
  while(curr->next != NULL){
    curr = curr->next;
    prev = prev->next;
  }
  tail = prev;
  prev->next = NULL;
  delete(curr);
}


void deleteFromMid(Node* &head, Node* &tail, int idx){

  int len = length(head);
  if(head == NULL){
    cout<<"Nope...!"<<endl;
  }
  if(idx > len){
    cout<<"Mat ka lala..! mat ka"<<endl;
  }
  if(idx == 1){
    deleteHead(head);
  }
  else if(idx == len){
    deleteTail(head, tail);
  }
  else{
    Node* curr = head->next;
    Node* prev = head;
    int i = 1;
    while(i != idx-1){
      curr = curr->next;
      prev = prev->next;
      i++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);
  }
}

int main(){


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

  Node* head = NULL;
  Node* tail = NULL;

  insertFromHead(head, tail, 56);
  inserFromTail(head, tail, 55);
  inserFromTail(head, tail, 36);
  insertFromMid(head, tail, 45, 3);
  // deleteHead(head);
  // deleteTail(head, tail);


  deleteFromMid(head, tail, 5);
  int len = length(head);
  cout<<len<<endl;
  cout<<"tail-> "<<tail->data<<endl;

  print(head);

  
}
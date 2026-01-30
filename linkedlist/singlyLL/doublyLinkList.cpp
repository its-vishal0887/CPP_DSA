#include<iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* prev;
    Node* Next;

  Node(){
    this->Next = NULL;
    this->prev = NULL;
  }

  Node(int data){
    this->data = data;
    this->Next = NULL;
    this->prev = NULL;
  }
};

int length(Node* &head){
  int cnt = 1;
  Node* temp = head;
  while(temp != NULL){
    cnt++;
    temp = temp->Next;
  }
  return cnt;
}
void insertFrmHead(Node* &head, Node* &tail, int data){
  Node* temp = new Node(data);
  if(head == NULL){
    cout<<"Aaouucchh..!"<<endl;
    head = temp;
    tail = temp;
  }
  else{
    temp->Next = head;
    head->prev = temp;
    head = temp;
  }
}

void insertFrmTail(Node* &head, Node* &tail, int data){
  Node* temp = new Node(data);
  if(head == NULL){
    head = temp;
    tail = temp;
  }
  else{
    Node* ptr = head;
    while(ptr->Next != NULL){
      ptr = ptr->Next;
    }
    ptr->Next = temp;
    temp->prev = ptr;
    tail = temp;
  }

}

void insertFrmMid(Node* &head, Node *&tail, int data, int pos){
  Node* temp = new Node(data);
  int len = length(head);
  if(head == NULL){
    head = temp;
    tail = temp;
  }
  if(pos <= 1){
    insertFrmHead(head, tail, data);
  }
  else if(pos >= len+1){
    insertFrmTail(head, tail, data);
  }
  else{
    Node* Prev = head;
    Node* curr = head->Next;
    int i = 1;
    while(i != pos-1){
      Prev = Prev->Next;
      curr =  curr->Next;
      i++;
    }
    Prev->Next = temp;
    temp->prev = Prev;
    temp->Next = curr;
    curr->prev = temp;
  }

}

void deleteHead(Node* &head){
  Node* temp = head;
  head = head->Next;
  head->prev = NULL;
  temp->Next = NULL;
  delete(temp);
}

void deleteTail(Node* &head, Node* &tail){
  if(head == NULL){
    cout<<"Not Possible ...!"<<endl;
    return;
  }
  else{
    Node* Prev = head;
    Node* curr = head->Next;

    while(curr->Next != NULL){
      Prev = Prev->Next;
      curr = curr->Next;
    }

    tail = Prev;
    Prev->Next = NULL;
    curr->prev = NULL;
    delete(curr);

  }
}

void deleteMid(Node* &head, Node* &tail, int pos){
  int len = length(head);
  if(pos == 1){
    deleteHead(head);
    return;
  }
  else if(pos == len){
    deleteTail(head, tail);
    return;
  }
  else{
    int i = 1;
    Node* Prev = head;
    Node* Surr = head->Next;
    Node* curr = head->Next->Next;
    while(i != pos-1){
      curr = curr->Next;
      Prev = Prev->Next;
      Surr = Surr->Next;
      i++;
    }
    Prev->Next = curr;
    curr->prev = Prev;
    Surr->Next = NULL;
    Surr->prev = NULL;
    delete(Surr);
  }
}

void print(Node* head) {
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<endl;
    temp = temp->Next;
  }
}

int main(){
  Node* head = NULL;
  Node* tail = NULL;

  insertFrmHead(head, tail, 20);
  insertFrmHead(head, tail, 10);
  insertFrmHead(head, tail, 5);
  insertFrmTail(head, tail, 56);
  insertFrmMid(head, tail, 50, 0);
  deleteHead(head);
  deleteTail(head, tail);
  deleteMid(head, tail, 2);

  print(head);
}
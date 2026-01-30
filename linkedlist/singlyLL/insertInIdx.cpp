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

class linkedlist{
  public:
  Node* head;
  Node* Tail;
  
  linkedlist(){
    head = NULL;
    Tail = NULL;
  }

  void insertIntoMId(int data, int idx){
    int i = 0;
    Node* p = head;
    Node* q = head->next;
    Node* temp = new Node(data);
    if(idx <= 0){
      head = Tail = temp;
    }
    while(i != idx-1){
      p=p->next;
      q = q->next;
      i++;
    }
    p->next = temp;
    temp->next = q;
  }

  void print(){
    Node* temp = head;
    while(temp != NULL){
      cout<<temp->data<<endl;
      temp = temp->next;
    }
  }
};


int main(){
  linkedlist ll;
  ll.insertIntoMId(4, 0);
  ll.print();

}
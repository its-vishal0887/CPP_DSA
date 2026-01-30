#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
  int data;
  Node* next;

  Node(int data){
    this->data = data;
    this->next = NULL;
  }
};

void insertAtHead(Node* &Head, int data){
  Node *temp = new Node();
  temp->next = Head;
  Head = temp;
}

void Traverse(Node* head){
  Node *temp = head;
  while(temp->next != NULL){
    cout<<temp->data<<endl;
    temp = temp->next;
  }
}

int main(){
  Node* head = node1;
  Node* node1 = new Node(20);
  Traverse(head);
  cout<<node1->data<<endl;
}
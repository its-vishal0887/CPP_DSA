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

void reverse(Node* &head){
  Node* prev = NULL;
  Node* curr = head;
  Node* temp = head;
  while(curr != NULL){
    temp = temp ->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  head = prev;
}

Node* addOne(Node* &head){
  //reverse
  reverse(head);
  Node* temp = head;
  //add
  int carry = 1;
  while(temp != NULL){
    int sum = temp->data + carry;
    temp->data = sum % 10;
    int carry = sum / 10;

    if(carry == 0){
      break;
    }

    if(temp->next != NULL && carry != 0){
      temp->next = new Node(carry);
      carry = 0;
    }
    temp = temp ->next;
  }
  //reverse
  reverse(head);
}
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

bool Cycyle(Node* &head){
  Node* slow = head;
  Node* fast = head;

  while(fast != slow){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
      if(fast != slow){
        slow = slow->next;
      }
      else{
        return true;
      }
      
    }
  }
}

Node* hasLoop(Node* &head){
  Node* slow = head;
  Node* fast = head;

  if(fast->next == NULL || slow->next == NULL){
    return -1;
  }

  while(fast != NULL){
    fast = fast->next;
    if(fast != NULL){
      fast = fast->next;
      slow = slow->next;
    }
    if(slow == fast){
      slow = head
      while(slow != fast){
        slow = slow->next;
        fast = fast->next;
      }
      return slow;

    }
  }
}
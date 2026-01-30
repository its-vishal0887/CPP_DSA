#include<iostream>
#include<map>
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


bool hascycle(Node* &head){
  
  map<Node*, bool>table;
  Node* temp = head;

  while(temp != NULL){
    if(table[temp] == false){
      table[temp] = true;
    }
    else{
      return true;
    }
    temp = temp->next;
  }
  return false;
}
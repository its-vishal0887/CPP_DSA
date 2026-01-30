#include<bits/stdc++.h>
using namespace std;

class node{

  public: 
    int data;
    node* link ;

    node(int data){
      this->data = data;
      this->link = NULL;
    }
};

node* create(int data){
  node* temp = new node(data);
  return temp;
}

void deleteFromAnyPos(node* &head, node* &tail, int targetData){
  node* temp = head->link;
  node* p = head;
  if(p->data == targetData){
    head = head->link;
    delete(p);
    return;
  }else{
    while(temp->data != targetData){
      temp = temp->link;
      p = p->link;
    }
    if(temp->link == NULL){
      p->link = temp->link;
      delete(temp);
      return;
    }
    p->link = temp->link;
    delete(temp);
    return;
  }
}

void insertatHead(node* &head, int data){
  node* temp = create(data);
  temp->link = head;
  head = temp;
}

void insertAtMid(int data, node* &head, node* &tail, int position){

  node* temp = create(data);
  node* p = head;
  int i = 2;
  if(position == 1){
    insertatHead(head, data);
    return;
  }else{

    while(i != position){
      p = p->link;
      i++;
    }
    temp->link = p->link;
    p->link = temp;
  }
  if(temp->link == NULL){
    tail = temp;
  }
}

void traverese(node* head){
  node* temp = head;
  while(temp->link != NULL){
    cout<<temp->data<<endl;
    temp = temp->link;
  }
}
int main(){
  node* fnode = new node(1);

  node* head = fnode;
  node* tail = fnode;

  insertatHead(fnode, 1);
  insertatHead(fnode, 2);
  insertatHead(fnode, 3);
  deleteFromAnyPos(fnode, tail, 2);
  traverese(fnode);




}
#include<iostream>
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

node* creat(int data){
  node*temp = new node(data);
  return temp;
};
void insertionAtHead(node* &head, int data){
  node* temp = creat(data);
  temp->link = head;
  head = temp;
};

void insertAtTail(node* &tail, int data){
  node* temp = creat(data);
  tail->link = temp;
  tail = temp;
}

void traverse(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->link;
  }cout<<endl;
}
//Befor index
void insertAtMid(node* &head,int idx ,int data, node* &tail){
  node* temp = creat(data);
  node* p = head;
  int i = 0;

  if(idx == 1){
    insertionAtHead(head, data);
    return;
  }
  while( i != idx-2 ){
    p = p->link;
  }

  if(p->link == NULL){
    insertAtTail(tail, data);
    return;
  }
  temp->link = p->link;
  p->link = temp;
}

int main(){

  node* fnode = new node(1);

  node* head = fnode;
  node* tail = fnode;
  insertionAtHead(head,10);
  insertAtTail(tail, 5);
  traverse(head);
  insertionAtHead(head, 20);
  traverse(head);
  insertionAtHead(head, 30);
  insertAtMid(head, 2, 3, tail);
  traverse(head);

  cout<<head->data;
  cout<<tail->data;

}
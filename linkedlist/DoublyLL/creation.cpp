#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
      this->data = data;
      prev = nullptr;
      next = nullptr;
    }

    Node(int data, Node* next, Node* prev){
      this->data = data;
      this->next = next;
      this->prev = prev;
    }
};


Node* deleteHead(Node* &head){
  Node* temp = head;
  head = head->next;
  head->prev = nullptr;
  temp->next = nullptr;
  delete(temp);

  return head;
}

Node* deleteTail(Node* &head){
  Node* tail = head;
  Node* prev = head;
  while(tail->next != NULL){
    tail = tail->next;
  }
  prev = tail;
  tail = tail->prev;
  tail->next = NULL;
  delete(prev);
  return head;
}

int length(Node* head){
  int cnt = 0;
  Node* temp = head;
  while(temp != NULL){
    temp = temp->next;
    cnt++;
  }
  return cnt;
}

Node* deleteAtMid(Node* &head, int idx){
  if(head == NULL){
    return NULL;
  }
  if(idx == 1){
    return deleteHead(head);
  }
  int len = length(head);
  if(idx == len){
    deleteTail(head);
  }
  int i =1;
  Node* temp = head;
  Node* t1 = NULL;
  Node* t2 = NULL;
  while(i != idx){
    temp = temp->next;
    i++;
  } 
  t1 = temp->prev;
  t2 = temp->next;
  t1->next = t2;
  t2->prev = t1;
  temp->next = NULL;
  temp->prev = NULL;
  delete(temp);
  return head;
}

Node* converVecToLL(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* m = head;
  for(int i = 1; i<arr.size(); i++){
    Node* temp = new Node(arr[i], nullptr, m);

    m->next = temp;
    m = temp;

  }
  return head;
}

void printLL(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data;
    temp = temp->next;
  }
}

int main(){
  vector<int>arr = {1,2,3,4,5};
  Node* result = converVecToLL(arr);
  Node* temp = deleteAtMid(result, );
  printLL(temp);


}
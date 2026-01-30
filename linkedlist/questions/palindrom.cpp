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

Node* breaklist(Node* &head){
  Node* slow = head;
  Node* fast = head;

  while(fast->next != NULL){
    fast = fast->next;
    if(fast->next != NULL){
      fast = fast->next;
      slow = slow->next;
    }
  }
  return slow;
}

Node* reversed(Node* head2){
  Node* prev = NULL;
  Node* curr = head2;
  Node* temp = head2;
  while(curr != NULL){
    temp = temp->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  return curr;
}

bool isPalindrome(Node* &head1, Node* &head2){
  Node* ptr1 = head1;
  Node* ptr2 = head2;

  while(ptr1 != NULL && ptr2 != NULL){
    if(ptr1->data != ptr2->data){
      return false;
    }else{
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
    }
  }
  return true;
}

int main(){
 
  

  Node* a = new Node(1);
  // Node* b = new Node(2);
  Node* c = new Node(2);
  Node* d = new Node(1);

  a->next = c;
  c->next = d;
  d->next = NULL;
  // d->next = NULL;

  Node* head = a;


  Node* ptr = breaklist(head);
  Node* ptr2 = ptr->next;
  Node* rev = reversed(ptr2);
  bool ispal = isPalindrome(ptr , rev);
  cout<<ispal<<endl;


  return 0;
}

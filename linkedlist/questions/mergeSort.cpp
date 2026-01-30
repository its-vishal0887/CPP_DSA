#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(){
    this->next = NULL;
  }
  Node(int val)
  {
    data = val;
    next = NULL;
  }
};

// 🌊 insert function (at end)
void insert(Node *&head, int val)
{
  Node *newNode = new Node(val);

  if (head == NULL)
  {
    head = newNode;
    return;
  }

  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
}

// 🔊 print function
void printList(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data;
    if (temp->next != NULL)
      cout << " -> ";
    temp = temp->next;
  }
  cout << endl;
}

Node* splitAtMid(Node* head){
  if(head == NULL || head->next == NULL){
    return NULL;
  }
  Node* slow = head;
  Node* fast = head->next;
  while(fast != NULL && fast->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  Node* mid = slow->next;
  slow->next = NULL;
  return mid;
}

Node* merge(Node* &left, Node* &right){
  
  if(left == NULL){
    return right;
  }

  if(right == NULL){
    return left;
  }
  
  Node* ans = new Node(-1);
  Node* temp = ans;
  while(left != NULL && right != NULL){
    if(left->data < right->data){
      temp->next = left;
      temp = left;
      left = left->next;
    }
    else{
      temp->next = right;
      temp = right;
      right = right->next;
    }
  }
  while(left != NULL){
    temp->next = left;
    temp = left;
    left = left->next;
  }

  while(right != NULL){
    temp->next = right;
    temp = right;
    right = right->next;
  }
  ans = ans->next;
  return ans;

}


Node* mergeSort(Node* &head){
  if(head == NULL || head->next == NULL){
    return head;
  }
  Node* righthead = splitAtMid(head);
  Node* left = head;

  //recursive sort
  left = mergeSort(left);
  righthead = mergeSort(righthead);

  //merge both right and left
  Node* result =  merge(left, righthead);
  return result;
}

int main()
{
  Node *list1 = NULL;
  
  // building: 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
  insert(list1, 1);
  insert(list1, 2);
  insert(list1, 4);
  insert(list1, 1);
  insert(list1, 3);
  insert(list1, 4);
  // insert(list1, 10);
  // insert(list1, 11);
  Node* result = mergeSort(list1);
  printList(result);
  return 0;
}
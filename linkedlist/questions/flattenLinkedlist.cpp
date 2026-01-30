#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node *bottom;

  Node(int x)
  {
    data = x;
    next = NULL;
    bottom = NULL;
  }
};

class Solution
{
public:

  Node* merge(Node* &right, Node* &left){
    if(right == NULL){
      return left;
    }
    if(left == NULL){
      return right;
    }

    Node* temp = new Node(-1);
    Node* nexxt = temp;
    while(right != NULL && left != NULL){
      if(left->data > right->data){
        nexxt->next = right;
        nexxt = right;
        right = right->next;
      }
      else{
        nexxt->next = left;
        nexxt = left;
        left = left->next;
      }
    }
    while(right != NULL){
      nexxt->next = right;
      nexxt = right;
      right = right->next;
    }
    while(left != NULL){
      nexxt->next = left;
      nexxt = left;
      left = left->next;
    }
    temp = temp->next;
    return temp;
  }

  Node *flatten(Node *root)
  {
    if (!root) return NULL;
    Node* bottom = flatten(root->bottom);
    Node* next = flatten(root->next);
    root->bottom = NULL;
    root->next = NULL;
    Node* merged = merge(root, bottom);
    return merge(merged, next);
  }

  

  // Node* mergeSort(Node* &head){
  //   if(head == NULL || head->next == NULL){
  //     return NULL;
  //   }

  //   Node* left = head;
  //   Node* right = flatten(head->next);

  //   left = mergeSort(left);
  //   right = mergeSort(right);

  //   Node* result = merge(right, left);
  //   return result;
  // }
  
};

void printList(Node *head)
{
  while (head != NULL)
  {
    cout << head->data << " -> ";
    head = head->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  /*
      Linked List structure:

      5  -> 10 -> 19 -> 28
      |     |     |     |
      7     20    22    35
      |           |     |
      8           50    40
      |                 |
      30                45
  */

  Node *head = new Node(5);
  head->bottom = new Node(7);
  head->bottom->bottom = new Node(8);
  head->bottom->bottom->bottom = new Node(30);

  head->next = new Node(10);
  head->next->bottom = new Node(20);

  head->next->next = new Node(19);
  head->next->next->bottom = new Node(22);
  head->next->next->bottom->bottom = new Node(50);

  head->next->next->next = new Node(28);
  head->next->next->next->bottom = new Node(35);
  head->next->next->next->bottom->bottom = new Node(40);
  head->next->next->next->bottom->bottom->bottom = new Node(45);

  Solution obj;
  Node* result = obj.flatten(head);
  // result print (jab tu logic likh de)
  printList(result);

  return 0;
}

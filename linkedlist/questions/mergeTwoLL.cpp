#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

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

int length(Node *&head)
{
  Node *temp = head;
  int i = 0;
  while (temp != NULL)
  {
    temp = temp->next;
    i++;
  }
  return i;
}

void insert(Node *&head)
{
  Node *prev = head;
  prev->next = head->next;
}

Node *mergeList(Node *&list1, Node *&list2)
{
  Node *temp1 = NULL;
  Node *temp2 = NULL;
  Node *prev = NULL;
  Node *curr = NULL;
  if (list1->data >= list2->data)
  {
    temp1 = list1;
    temp2 = list1;
    prev = list2;
    curr = list2->next;
  }
  else
  {
    temp1 = list2;
    temp2 = list2;
    prev = list1;
    curr = list1->next;
  }

  while (temp2 != NULL)
  {
    if (prev->data <= temp1->data && temp1->data <= curr->data)
    {
      temp2 = temp2->next;
      prev->next = temp1;
      temp1->next = curr;
      temp1 = temp2;
      prev = prev->next;
    }
    else
    {
      prev = prev->next;
      curr = curr->next;
    }
  }
  if(temp2->next == NULL){
    return list1;
  }
  else if(curr->next == NULL){
    return list2;
  }
}

int main()
{
  Node *list1 = NULL;
  Node *list2 = NULL;

  // building: 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
  insert(list1, 1);
  insert(list1, 2);
  insert(list1, 4);
  insert(list2, 1);
  insert(list2, 3);
  insert(list2, 4);
  // insert(head, 10);
  // insert(head, 1);

  Node* temp = mergeList(list1, list2);
  printList(temp);
  printList(list2);
  return 0;
}

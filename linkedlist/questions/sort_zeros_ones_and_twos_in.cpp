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

Node *reversedLl(Node *&head)
{
  Node *prev = NULL;
  Node *curr = head;
  Node *newNode = head;
  while (curr != NULL)
  {
    newNode = newNode->next;
    curr->next = prev;
    prev = curr;
    curr = newNode;
  }
  return prev;
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

Node *sortLL(Node *&head)
{
  Node *temp = head;
  int zeros = 0, ones = 0, twos = 0;
  int len = length(head);
  while (temp != NULL)
  {
    if (temp->data == 0)
    {
      zeros++;
    }
    else if (temp->data == 1)
    {
      ones++;
    }
    else if (temp->data == 2)
    {
      twos++;
    }
    temp = temp->next;
  }

  vector<int> ele(len);
  for (int i = 0; i < zeros; i++)
  {
    ele[i] = 0;
  }
  for (int i = zeros; i < zeros + ones; i++)
  {
    ele[i] = 1;
  }
  for (int i = zeros + ones; i < len; i++)
  {
    ele[i] = 2;
  }

  temp = head;
  int k = 0;
  while (temp != NULL)
  {
    temp->data = ele[k++];
    temp = temp->next;
  }

  return head;
}

void insertAtTail(Node* &tail, Node* &temp){
  tail->next = temp;
  tail = temp;
}

Node* optmalsort(Node* &head){
  Node* onehead = new Node(-1);
  Node* oneTail = onehead;
  Node* twoHead = new Node(-1);
  Node* twoTail = twoHead;
  Node* zeroHead = new Node(-1);
  Node* zeroTail = zeroHead;

  Node* curr = head;
  while(curr != NULL){
    
    int val = curr->data;
    if(val == 0){
      insertAtTail(zeroTail, curr);
    }
    else if(val == 1){
      insertAtTail(oneTail, curr);
    }
    else{
      insertAtTail(twoTail, curr);
    }
    curr = curr->next;
  }

  zeroHead = zeroHead->next;
  zeroTail = onehead->next;
  oneTail = twoHead->next;
  return zeroHead;
}

Node *removeduplicate(Node *&head)
{
  Node *temp = head;

  if (temp == NULL || temp->next == NULL)
  {
    return head;
  }

  while (temp != NULL && temp->next != NULL)
  {
    if (temp->data == temp->next->data)
    {
      Node *nextNode = temp->next;
      temp->next = nextNode->next;
      nextNode->next = NULL;
      delete (nextNode);
    }
    else
    {
      temp = temp->next;
    }
  }
  return head;
}
Node* deleteNafterM(Node* &head, int m, int n){
  
  if(head == NULL){
    return head;
  }

  Node* temp = head;

  for(int i = 1; i<m && temp != NULL; i++){
    temp = temp->next;
  }

  if(temp == NULL){
    return head;
  }

  Node* curr = temp->next;
  for(int i = 0; i<n && curr != NULL; i++){
    Node* del = curr;
    curr = curr->next;
    delete(del);
  }

  temp->next = deleteNafterM(curr, m, n);
  return head;

}

int main()
{
  Node *head = NULL;

  // building: 1 → 2 → 2 → 1 → 2 → 0 → 2 → 2
  insert(head, 1);
  insert(head, 2);
  insert(head, 2);
  insert(head, 1);
  insert(head, 2);
  insert(head, 0);
  insert(head, 2);
  insert(head, 2);

  printList(head);
  Node *temp = optmalsort(head);
  printList(temp);

  return 0;
}

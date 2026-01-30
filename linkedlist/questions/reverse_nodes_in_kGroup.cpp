#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
};

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

Node *revLinklist(Node *head, int k)
{

  // if(head == NULL) return NULL;

  // Node* temp = head;
  // for(int i = 0; i<k; i++){
  //   if(temp == NULL){
  //     return head;
  //   }
  //   temp = temp->next;
  // }

  // Node* prev = NULL;
  // Node* curr = head;
  // Node* next = NULL;
  // int cnt = 0;

  // while(curr != NULL && cnt < k){
  //   next = curr->next;
  //   curr->next = prev;
  //   prev = curr;
  //   curr = next;
  //   cnt++;
  // }

  // if(head != NULL){
  //   head->next = revLinklist(curr, k);
  // }
  // return prev;
  if (head == NULL)
  {
    return head;
  }
  if (head->next == NULL)
  {
    return head;
  }
  int len = length(head);

  if (len < k)
  {
    return head;
  }
  int i = 0;
  Node *prev = NULL;
  Node *curr = head;
  Node *temp = curr->next;

  while (i < k)
  {
    temp = curr->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
    i++;
  }
  if (temp != NULL)
  {
    head->next = revLinklist(curr, k);
  }

  return prev;
}

Node *swapNode(Node *&head, int k)
{
  vector<int> ele;
  Node *temp = head;

  while (temp != NULL)
  {
    ele.push_back(temp->data);
    temp = temp->next;
  }

  int n = ele.size();

  if (k > n)
    return head;

  swap(ele[k - 1], ele[n - k]);

  temp = head;
  int i = 0;
  while (temp != NULL)
  {
    temp->data = ele[i++];
    temp = temp->next;
  }

  return head;
}

Node *reverLinkList(Node *&head)
{
  Node *prev = NULL;
  Node *curr = head;
  Node *temp = head;
  while (curr != NULL)
  {
    temp = temp->next;
    curr->next = prev;
    prev = curr;
    curr = temp;
  }
  return prev;
}
Node *deleteKthNode(Node *&head, int k)
{
  head = reverLinkList(head);

  Node *temp = head;
  Node *curr = head->next;

  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }

  if (k == 1)
  {
    head = head->next;
    delete (temp);
    return head;
  }

  int i = 0;

  while (i != k - 1)
  {
    curr = curr->next;
    temp = temp->next;
    i++;
  }
  temp->next = curr->next;
  curr->next = NULL;
  delete(curr);

  head = reverLinkList(head);
  return head;

}
void insertAtHead(Node *&head, int data)
{
  Node *temp = new Node(data); // pass data
  temp->next = head;
  head = temp;
}

void Traverse(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  { // important fix
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}

int main()
{
  Node *head = NULL; // start with empty list

  insertAtHead(head, 20);
  // insertAtHead(head, 30);
  // insertAtHead(head, 40);
  // insertAtHead(head, 10);

  Traverse(head);
  Node *temp = deleteKthNode(head, 1);
  Traverse(temp);

  return 0;
}

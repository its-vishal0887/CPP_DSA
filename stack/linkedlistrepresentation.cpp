//Implementation Using Linked List

#include <iostream>
using namespace std;

class Node
{

public:
  int data;
  Node *next;
  Node *head = NULL;
  Node *Tail = NULL;

  Node()
  {
    next = NULL;
  }

  void push(int data)
  {
    Node *temp = new Node();
    temp->data = data;
    if (head == NULL)
    {
      head = temp;
      Tail = temp;
    }
    else
    {
      Tail->next = temp;
      Tail = temp;
    }
  }

  void pop()
  {
    if (head == NULL)
    {
      cout << "Stack is UnderFlow !!" << endl;
      return;
    }
    else
    {
      Node* temp = head;
      Node* curr = Tail;
      while(temp->next != Tail){
        temp = temp->next;
      }
      Tail = temp;
      Tail->next = NULL;
      delete curr;
    }
  }

  bool isEmpty()
  {
    if (head == NULL)
    {
      // cout<<"Stack Is Empty"<<endl;
      return true;
    }
    else
    {
      return false;
    }
  }

  void top()
  {
    if (isEmpty())
    {
      cout << "Stack Is Empty" << endl;
      return;
    }
    else
    {
      cout << Tail->data << endl;
      return;
    }
  }
  void print()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout <<temp->data<<" ";
      temp = temp->next;
    }
    return;
  }
};

int main()
{
  Node A;
  A.push(45);
  A.push(4);
  A.push(5);
  A.push(45);
  A.push(5);
  A.push(5);
  A.push(8);
  A.pop();
  A.pop();
  A.top();
  A.print();
}
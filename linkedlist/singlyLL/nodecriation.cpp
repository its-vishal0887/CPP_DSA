#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int data)  // constructor
  { 
    this->data = data;
        //  |        |
        //  |        ^----- constructor ka data (parameter)
        //  ^----- class ka data (object ka data member)

    this->next = NULL;
  }
};

int main()
{
  node *head = new node(10);
  cout << head->data << endl;
}
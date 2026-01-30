#include <iostream>
#include <map>
using namespace std;

class ListNode
{
public:
  int val;
  ListNode *next;

  ListNode(int x)
  {
    val = x;
    next = NULL;
  }
};

class Solution
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    ListNode *temp1 = headA;
    ListNode *temp2 = headB;
    map<ListNode *, bool> result;

    while (temp1 != NULL)
    {
      result[temp1] = true;
      temp1 = temp1->next;
    }

    while (temp2 != NULL)
    {
      if (result.find(temp2) != result.end())
      {
        return temp2;
      }
      temp2 = temp2->next;
    }
    return NULL;
  }
};

int length(ListNode* &headA){
  int cnt = 0;
  ListNode* temp = headA;
  while(temp != NULL){
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

ListNode* interSection(ListNode* &headA, ListNode* &headB){
  int len1 = length(headA);
  int len2 = length(headB);
  ListNode* temp1 = NULL;
  ListNode* temp2 = NULL;
  int finallen;
  if(len1 > len2){
    temp1 = headA;
    temp2 = headB;
    finallen = len1 - len2;
    for(int i = 1; i<finallen; i++){
      temp2 = temp2->next;
    }
  }
  else if(len2 > len1){
    temp1 = headB;
    temp2 = headA;
    finallen = len2 - len1 + 1; // Adjusted to correctly skip nodes
    for(int i = 0; i<finallen; i++){
      temp1 = temp1->next;
    }
  }
  else{
    temp1 = headA;
    temp2 = headB;
  }
  while( temp1 != NULL && temp2 != NULL){
    if(temp1 == temp2){
      return temp1;
    }
    temp1 = temp1->next;
    temp2 = temp2->next;
  }

  return NULL;
}

int main()
{
  // shared part: 8 -> 4 -> 5
  ListNode *intersect = new ListNode(8);
  intersect->next = new ListNode(4);
  intersect->next->next = new ListNode(5);

  // list A: 4 -> 1 -> 8 -> 4 -> 5
  ListNode *headA = new ListNode(4);
  headA->next = new ListNode(1);
  headA->next->next = intersect;

  // list B: 5 -> 6 -> 1 -> 8 -> 4 -> 5
  ListNode *headB = new ListNode(5);
  headB->next = new ListNode(6);
  headB->next->next = new ListNode(1);
  headB->next->next->next = intersect;

  // function call ready, logic tu bharega
  ListNode *ans = interSection(headA, headB);
  cout<<ans->val<<endl;

  return 0;
}

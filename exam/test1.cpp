#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node(int val)
  {
    data = val;
    next = NULL;
  }
};
void push(node *&head, int val)
{
  node *n = new node(val);
  node *temp = head;
  if (head == NULL)
  {
    head = n;
    return;
  }
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}
void pop(node *&head)
{
  node *temp = head;
  head = head->next;
  delete temp;
}
void display(node *&head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
int main()
{
  int val;
  node *head = NULL;
  push(head, 3);
  push(head, 5);
  push(head, 8);
  display(head);
  pop(head);
  display(head);
  return 0;
}
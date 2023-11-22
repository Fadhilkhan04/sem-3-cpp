#include <iostream>
using namespace std;

int push(int mynum[], int val, int top, int size)
{
  if (top == size - 1)
  {
    cout << "stack is full";
  }
  else
  {
    top++;
    mynum[top] = val;
  }
  return top;
}

int pop(int mynum[], int size, int top)
{
  if (top == -1)
  {
    cout << "stack is empty";
  }
  else
  {
    cout << "the deleted item is :" << mynum[top];
    top--;
  }
  return top;
}
void display(int mynum[], int top, int size)
{
  int i;
  if (top == -1)
  {
    cout << "stack is empty";
  }
  else
  {
    for (i = 0; i <= top; i++)
    {
      cout << mynum[i] << " ";
    }
  }
}

int main()
{

  int size;
  int top = -1;
  cout << "enter the size";
  cin >> size;
  int mynum[size];

  int ch, val;
  while (true)
  {
    cout << endl;
    cout << "----------- Stack Operation -----------" << endl;
    cout << "1. push Array." << endl;
    cout << "2. pop Array." << endl;
    cout << "3. Display Array." << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> ch;
    if (ch == 1)
    {
      cout << "enter the element:";
      cin >> val;
      top = push(mynum, val, top, size);
      continue;
    }
    else if (ch == 2)
    {
      top = pop(mynum, size, top);
      continue;
    }
    else if (ch == 3)
    {
      display(mynum, top, size);
      continue;
    }
    else if (ch == 4)
    {
      cout << "thankyou";
      break;
    }
    else
    {
      cout << "try again ";
      continue;
    }
  }

  return 0;
}
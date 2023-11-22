#include <iostream>
using namespace std;

int rear = -1;
int front = 0;

void enqueue(int mynum[], int size, int val)
{
  if (rear == size - 1)
  {
    cout << "queue fulll";
  }
  else
  {
    rear++;
    mynum[rear] = val;
  }
}
void dequeue(int mynum[], int size)
{
  if (rear == -1)
  {
    cout << "queue is empty";
  }
  else
  {
    cout << "deleted item is :" << mynum[front];
    front++;
    if (front > rear)
    {
      rear = -1;
      front = 0;
    }
  }
}
void display(int mynum[], int size)
{
  if (rear == -1)
  {
    cout << "queue is empty";
  }
  else
  {
    int i;
    for (i = front; i <= rear; i++)
    {
      cout << mynum[i] << " ";
    }
  }
}
int main()
{
  int size;
  cout << "enter the size:";
  cin >> size;
  int mynum[size];

  int ch, val;
  while (true)
  {
    cout << endl;
    cout << "----------- queue Operation -----------" << endl;
    cout << "1. enqueue Array." << endl;
    cout << "2. dequeue Array." << endl;
    cout << "3. Display Array." << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> ch;
    if (ch == 1)
    {
      cout << "enter the element:";
      cin >> val;
      enqueue(mynum, size, val);
      continue;
    }
    else if (ch == 2)
    {
      dequeue(mynum, size);
      continue;
    }
    else if (ch == 3)
    {
      display(mynum, size);
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
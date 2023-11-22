#include <iostream>
using namespace std;

void insert(int mynum[], int n, int val, int pos)
{
  int i;
  for (i = n; i >= pos; i--)
  {
    mynum[i] = mynum[i - 1];
  }
  mynum[pos] = val;
}
void deleted(int mynum[], int n, int x)
{
  int i, item;
  for (i = 0; i < n; i++)
  {
    if (i == x)
    {
      break;
    }
  }
  item = mynum[i];
  cout << "deleted item is:" << item;
  if (i < n)
  {
    for (i = x; i < n; i++)
    {
      mynum[i] = mynum[i + 1];
    }
  }
}

void display(int mynum[], int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    cout << mynum[i] << " ";
  }
}

int main()
{

  int size, n, i;
  cout << "enter the size";
  cin >> size;
  int mynum[size];
  cout << "enter number of elements";
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cout << "enter element" << i + 1;
    cin >> mynum[i];
  }
  int pos, ch, val, x;
  while (true)
  {
    cout << endl;
    cout << "----------- Array Operation -----------" << endl;
    cout << "1. Insert Array." << endl;
    cout << "2. Delete Array." << endl;
    cout << "3. Display Array." << endl;
    cout << "4. Exit" << endl;
    cout << "Enter choice: ";
    cin >> ch;
    if (ch == 1)
    {
      cout << "enter the element:";
      cin >> val;
      cout << "enter the pos";
      cin >> pos;
      n++;
      insert(mynum, n, val, pos);
      continue;
    }
    else if (ch == 2)
    {
      cout << "enter the pos";
      cin >> x;
      deleted(mynum, n, x);
      n--;
      continue;
    }
    else if (ch == 3)
    {
      display(mynum, n);
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
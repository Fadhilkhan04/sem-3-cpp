#include <iostream>
using namespace std;

void deleted(int mynum[], int n, int x)
{
  int i;
  for (i = 0; i < n + 1; i++)
  {
    if (mynum[i] == x)
    {
      break;
    }
  }
  if (i < n + 1)
  {
    for (int j = i; j < n; j++)
    {
      mynum[j] = mynum[j + 1];
    }
  }
  cout << "current array is" << endl;
  for (i = 0; i < n; i++)
    cout << mynum[i] << " ";
}

void insert(int mynum[], int n, int num, int pos)
{
  int i;
  for (i = n + 1; i >= pos; i--)
  {
    mynum[i] = mynum[i - 1];
  }
  mynum[pos - 1] = num;
  cout << "current array is" << endl;
  for (i = 0; i < n + 1; i++)
    cout << mynum[i] << " ";
  cout << endl;
}

int main()
{
  int n, i, num, pos, x;
  cout << "Enter the size of the array : ";
  cin >> n;
  int mynum[n + 1];
  cout << "Enter the elements of the array : ";
  for (i = 0; i < n; i++)
    cin >> mynum[i];
  cout << "current array is" << endl;
  for (i = 0; i < n; i++)
    cout << mynum[i] << " ";
  cout << endl;

  cout << "enter the number you want to insert :" << endl;
  cin >> num;

  cout << "enter the position you want to insert in :" << endl;
  cin >> pos;

  insert(mynum, n, num, pos);

  cout << "enter the element you want to delete :" << endl;
  cin >> x;

  deleted(mynum, n, x);

  return 0;
}
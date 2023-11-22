#include <iostream>
using namespace std;

int main()
{
  int size, i;
  cout << "enter the size of the array :";
  cin >> size;
  int mynum[size];
  for (i = 0; i < size; i++)
  {
    cout << "enter the element" << i + 1 << ":";
    cin >> mynum[i];
  }
  int max = mynum[0];
  int min = mynum[0];
  for (i = 0; i < size; i++)
  {
    if (max < mynum[i])
    {
      max = mynum[i];
    }
  }
  for (i = 0; i < size; i++)
  {
    if (min > mynum[i])
    {
      min = mynum[i];
    }
  }
  cout << "the max number is:" << max << endl;
  cout << "the min number is:" << min << endl;
  return 0;
}
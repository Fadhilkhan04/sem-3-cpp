#include <iostream>
using namespace std;

int main()
{
  int n, i;
  cout << "enter the number of elements in the array:";
  cin >> n;
  int arr[n];
  for (i = 0; i < n; i++)
  {
    cout << "enter the element" << i + 1 << ":";
    cin >> arr[i];
  }
  cout << "array before sorting:" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  int value, index, j, temp;
  for (i = 0; i < n; i++)
  {
    value = arr[i];
    index = i;
    for (j = i + 1; j < n; j++)
    {
      if (value > arr[j])
      {
        value = arr[j];
        index = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[index];
    arr[index] = temp;
  }
  cout << "array after sorting:" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
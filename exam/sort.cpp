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
  int value, index;
  for (i = 1; i < n; i++)
  {
    value = arr[i];
    index = i;
    while (index > 0 && value < arr[index - 1])
    {
      arr[index] = arr[index - 1];
      index--;
    }
    arr[index] = value;
  }
  cout << "array after sorting:" << endl;
  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
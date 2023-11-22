#include <iostream>
using namespace std;

int main()
{
  int i, j, r, c;

  cout << "enter the rows of the matrices :";
  cin >> r;
  cout << "enter the coloumns of the matrices:";
  cin >> c;
  int a[r][c];
  int b[r][c];
  cout << "enter the element of first matrix" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << "enter element:a" << i << j << endl;
      cin >> a[i][j];
    }
  }
  cout << "enter the element of second matrix" << endl;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << "enter element:b" << i << j << endl;
      cin >> b[i][j];
    }
  }
  int sum[r][c];
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }
  cout << "sum is :" << endl;
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      cout << sum[i][j] << "\t";
      if (j == c - 1)
      {
        cout << "\n\n";
      }
    }
  int mult[i][j];
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      mult[i][j] = 0;
    }
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
      for (int k = 0; k < c; k++)
      {
        mult[i][j] += a[i][k] * b[k][j];
      }
  cout << "multiplication is :" << endl;
  for (i = 0; i < r; i++)
    for (j = 0; j < c; j++)
    {
      cout << mult[i][j] << "\t";
      if (j == c - 1)
      {
        cout << "\n\n";
      }
    }

  return 0;
}
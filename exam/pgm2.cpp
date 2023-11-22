#include <iostream>
using namespace std;

int main()
{
  string text;
  int i;
  cout << "enter a  text :" << endl;
  cin >> text;
  cout << text[0];

  for (i = 1; i < text.length() && text[i] != '\0'; i++)
  {
    if (text[i] == text[i - 1] + 1)
    {
      cout << text[i];
    }
    else
    {
      cout << endl
           << text[i];
    }
  }
  return 0;
}
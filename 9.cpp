#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *left;
  node *right;

  node(int val)
  {
    data = val;
    left = NULL;
    right = NULL;
  }
};

node *insert(node *&root, int val)
{
  node *n = new node(val);

  n->left = NULL;
  n->right = NULL;

  if (root == NULL)
  {
    root = n;
  }
  else if (val <= root->data)
  {
    root->left = insert(root->left, val);
  }
  else
  {
    root->right = insert(root->right, val);
  }
  return root;
}

int main()
{

  int val;
  node *root = NULL;
  root = insert(root, 10);
  cout << "hello";
  root = insert(root, 15);
  cout << "hello";
  root = insert(root, 20);
}

#include <iostream>
using namespace std;

struct Node
{
  int data;
  Node *left;
  Node *right;
  int height;
};

int max(int a, int b)
{
  return (a > b) ? a : b;
}

int height(Node *node)
{
  if (node == NULL)
    return 0;
  return node->height;
}
Node *createNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->height = 1;
  return newNode;
}
Node *rotateRight(Node *y)
{
  Node *x = y->left;
  Node *T2 = x->right;
  x->right = y;
  y->left = T2;
  y->height = max(height(y->left), height(y->right)) + 1;
  x->height = max(height(x->left), height(x->right)) + 1;
  return x;
}
Node *rotateLeft(Node *x)
{
  Node *y = x->right;
  Node *T2 = y->left;
  y->left = x;
  x->right = T2;
  x->height = max(height(x->left), height(x->right)) + 1;
  y->height = max(height(y->left), height(y->right)) + 1;
  return y;
}
int getBalanceFactor(Node *node)
{
  if (node == NULL)
    return 0;
  return height(node->left) - height(node->right);
}
Node *insert(Node *node, int data)
{
  if (node == NULL)
    return createNode(data);
  if (data < node->data)
    node->left = insert(node->left, data);
  else if (data > node->data)
    node->right = insert(node->right, data);
  else
    return node;
  node->height = 1 + max(height(node->left), height(node->right));
  int balance = getBalanceFactor(node);
  if (balance > 1)
  {
    if (data < node->left->data)
      return rotateRight(node);
    else if (data > node->left->data)
    {
      node->left = rotateLeft(node->left);
      return rotateRight(node);
    }
  }
  if (balance < -1)
  {
    if (data > node->right->data)
      return rotateLeft(node);
    else if (data < node->right->data)
    {
      node->right = rotateRight(node->right);
      return rotateLeft(node);
    }
  }
  return node;
}
void inorderTraversal(Node *node)
{
  if (node == NULL)
    return;
  inorderTraversal(node->left);
  cout << node->data << " ";
  inorderTraversal(node->right);
}
void preorderTraversal(Node *node)
{
  if (node == NULL)
    return;
  cout << node->data << " ";
  preorderTraversal(node->left);
  preorderTraversal(node->right);
}
void postorderTraversal(Node *node)
{
  if (node == NULL)
    return;
  postorderTraversal(node->left);
  postorderTraversal(node->right);
  cout << node->data << " ";
}
int main()
{
  Node *root = NULL;
  int numElements, data;
  cout << "AVL TREE" << endl;
  cout << "Enter the number of elements to insert: ";
  cin >> numElements;
  for (int i = 0; i < numElements; i++)
  {
    cout << "Enter element " << i + 1 << ": ";
    cin >> data;
    root = insert(root, data);
  }
  cout << "Inorder traversal: ";
  inorderTraversal(root);
  cout << endl;
  cout << "Preorder traversal: ";
  preorderTraversal(root);
  cout << endl;
  cout << "Postorder traversal: ";
  postorderTraversal(root);
  cout << endl
       << endl;
  cout << "\n------Done By:-------" << endl;
  cout << "Fadhil khan" << endl;
  cout << "220071601060" << endl;
  cout << "B.Tech CSE - A" << endl;
  return 0;
}
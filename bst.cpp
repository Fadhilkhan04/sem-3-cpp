#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *leftchild;
  node *rightchild;

  node(int val)
  {
    data = val;
    leftchild = NULL;
    rightchild = NULL;
  }
};

void insert( node *&root , int val) {
    node *n = new node(val);
    node *current;
    node *parent;

    n->leftchild = NULL;
    n->rightchild = NULL;

    if(root == NULL) {
        root = n;
    }
    else {
        current = root;
        parent  = NULL;

        while {
            parent = current;

            if (data < parent->data){

                current = current->leftChild;                

            if(current == NULL) {
               parent->leftChild = n;
               return;
                }
            }

            else {
                
            current = current->rightChild;
            
            if(current == NULL) {
               parent->rightChild = n;
               return;
                }
            }
        }
    }
}

int main()
{
  
  int val;
  node *root = NULL;
  insert(root,10);

}
  
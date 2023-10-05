#include <iostream>
#include <cstdlib>
using namespace std;

struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head; 

void insertbeg()  
{  
    struct node *ptr;  
    int item;  
    ptr = malloc(sizeof(struct node *));  
    if(ptr == NULL)  
    {  
        cout<<"overflow"<<endl;
    }  
    else  
    {  
        cout<<"Enter the value:"<<endl;    
        cin>>item;    
        ptr->data = item;  
        ptr->next = head;  
        head = ptr;  
        cout<<"node inserted"<<endl; 
    }  
}  

int main() {
	
	int ch;
	
	while (true) {
    
	cout << endl;
    cout << "----------- linked list Operation -----------" << endl;
    cout << "1. Insert at the beginning." << endl;
    cout << "2. Insert at the middle." << endl;
    cout << "3. Insert at the end." << endl;
    cout << "4. Delete at the beginning" << endl;
    cout << "5. Delete at the middle." << endl;
    cout << "6. Delete at the end." << endl;
    cout << "7. Display." << endl;
    cout << "8. exit" << endl;
    cout << "Enter choice: ";

    cin >> ch;

    if (ch == 1)
    {
      insertbeg();
      continue;
    }
    
    else if (ch == 2)
    {
      dequeue(queue, size);
      continue;
    }
    
    else if (ch == 3)
    {
      peek(queue);
      continue;
    }
    
    else if (ch == 4)
    {
      display(queue);
      continue;
    }
    
    else if (ch == 5)
    {
      dequeue(queue, size);
      continue;
    }
    
    else if (ch == 6)
    {
      peek(queue);
      continue;
    }
    
    else if (ch == 7)
    {
      display(queue);
      continue;
    }
    
    else if (ch == 8)
    {
      cout << "Fadhilkhan" << endl;
      cout << "RRN : 220071601060" << endl;
      cout << "B.Tech CSE - A" << endl;
      break;
    }
    
    else{
    	 cout << endl
           << "Invalid choice try again." << endl
           << endl;
         continue;
	}
	return 0;
  }
}

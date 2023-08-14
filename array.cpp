#include <iostream>
using namespace std;



int main() {
	int x,pos,i,n;
	
	
	cout << "enter the number of elements in the array :" << endl;
	cin >> n;
	int mynum[n];
		
	for (i = 0; i<n ; i++) {
		cout << "enter the element :" << endl;
		cin >> mynum[i];
		}
		
	for (i = 0; i<n ; i++)
        cout << mynum[i] << " ";
    cout << endl;
		
	
	cout << "enter the element you want to insert :" << endl;
	cin >> x;
	cout << "enter the position you want to insert in :" << endl;
	cin >> pos;
	


    int mynum1[n+1];
	for (i = 0; i<pos; i++) {
	    mynum1[i] = mynum[i];
    }
     mynum1[pos] = x;
     
     for (i = pos+1 ; i< n+1; i++) {
     	mynum1[i] = mynum[i];
	 }

    
	
	for (i = 0; i < pos ; i++)
        cout << mynum1[i] << " ";
    cout << endl;
	

	return 0;
    	
	
}

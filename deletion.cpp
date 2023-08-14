#include <iostream>
using namespace std;



int main() {
	int i,n,num;
	
	
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
    
    cout << "enter the element you want to search :" <<endl;
    cin >> num;
    
    for (i = 0; i<n ; i++) {
    	if(mynum[i]==num){
    		cout << "the element for at index:"<<i;
		}
		
    	
	}
    
    return 0;
    
}

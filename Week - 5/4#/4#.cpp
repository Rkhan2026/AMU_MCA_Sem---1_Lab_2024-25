#include<iostream>
using namespace std;

int main(){
	cout<<"Write a cpp progam to get the second largest element in an Array\n";
	cout<<"----------------------------------------------------------------\n";
	
	int n;
	
	cout<<"\nEnter the Length of an Array : ";
	cin>>n;
	
	int array[n];
	

	for (int i=0;i<n;i++){
		cout<<"\nEnter the elements at position "<<i<< " :";
		cin>>array[i];
	}
	
    int first = INT_MIN, second = INT_MIN; 
  
    for (int i = 0; i < n; i++) { 
        
        if (array[i] > first) { 
            second = first; 
            first = array[i]; 
        } 
        
        else if (array[i] > second && array[i] < first) { 
            second = array[i]; 
        } 
    } 
  
    cout <<"\nSecond Largest Element in the Array: "<< second << endl; 
  
    return 0; 
}


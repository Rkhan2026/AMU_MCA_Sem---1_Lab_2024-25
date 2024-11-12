#include<iostream>
using namespace std;

int main(){
	cout<<"Program to reverse the elements of an Array:\n";
	cout<<"----------------------------------------------\n";
	
	int n,temp;
	
	cout<<"\nEnter the Length of an Array : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0;i<n;i++){
		cout<<"\nEnter the element of array at position "<<i<<" : ";
		cin>>arr[i];
	}
	
	cout<<"\n";
	
	cout<<"\nElements of array before reversing are : ";
	
	for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
	
	for (int rev=0;rev<n/2;rev++){
		temp = arr[rev];
        arr[rev] = arr[n-rev-1];
        arr[n-rev-1] = temp;
	}
	
	cout<<"\n";
	
	cout<<"\nElements of array in reverse order are : ";
	
	for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
	
	return 0;
}


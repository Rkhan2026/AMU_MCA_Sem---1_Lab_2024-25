#include<iostream>
using namespace std;

int main(){
	cout<<"Write a cpp progam to get the sum of elements of array \n";
	cout<<"-------------------------------------------------------\n";
	
	int n;
	
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i <n; i++){
		cout<<"\nEnter the element at position "<<i<<" : ";
		cin>> arr[i];
	}
	
	int sum = 0 ;
	
	for(int i=0; i<n; i++){
		sum = sum + arr[i];
	}
	
	cout<<"\nSum of the array elements are : "<< sum << endl;
	return 0;
}


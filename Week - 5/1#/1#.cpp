#include<iostream>

using namespace std;

int main(){
	cout<<"Write A Progam To Input Elements In Array And Print Them \n";
	cout<<"------------------------------------------------------------\n";
	
	int n;
	
	cout<<"\nEnter the number of elements : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cout<<"\nEnter the element at position "<<i<<" : ";
		cin>> arr[i];
	}
	
	cout<<"\nArray elements are : ";
	
	for(int i=0; i<n; i++){
		cout<< arr[i] <<" ";
	}
	
	return 0;
}


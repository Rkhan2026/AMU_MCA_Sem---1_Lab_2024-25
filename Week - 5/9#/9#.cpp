#include<iostream>
using namespace std;

int main(){
	cout<<"To find the frequency of an element in an array:\n";
	cout<<"-------------------------------------------------\n";
	
	int len,check,count;
	
	cout<<"\nEnter the length of array : ";
	cin>>len;
	
	int arr[len];
	
	cout<<endl;
	
	for(int i=0;i<len;i++){
		cout<<"\nEnter the element of Array at position "<<i<<" : ";
		cin>>arr[i];
	}
	
	cout<<"\n";
	
	cout<<"\nEnter the element to check the frequency : ";
	cin>>check;
	
	for (int i=0;i<len;i++){
		if(arr[i]==check){
			count++;
		}
	}
	
	cout<<"\nFrequency of "<<check<<" is : "<<count;
	return 0;
}


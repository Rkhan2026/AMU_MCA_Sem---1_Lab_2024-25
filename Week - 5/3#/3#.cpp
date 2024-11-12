#include<iostream>
using namespace std;

int main(){
	
	cout<<"Write a cpp progam to get the lenth of array \n";
	cout<<"---------------------------------------------\n";
	
	int arr[] = {11, 22, 33, 43, 51, 13};
	
	int length = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"\nLength Of Array Is : "<< length;
	return 0;
}


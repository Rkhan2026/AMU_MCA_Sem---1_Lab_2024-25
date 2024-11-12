#include<iostream>
using namespace std;

int main(){
	cout<<"Program For Increment And Decrement Interger Using Pointer --> \n";
	
	cout<<"------------------------------------------------------------\n";
	int a;
	int *ptr;
	
	cout<<"\nEnter The Value Of a : ";
	cin>>a;
	
	ptr=&a;
	
	//Post Increment 
	(*ptr)++;
	cout<<"\nThe Value Of a After Post Increment Is : "<<a<<"\n";
	
	//pre Increment
	++(*ptr);
	cout<<"The Value Of a After Pre Increment  Is : "<<a<<"\n";
	
	//post Decrement 
	(*ptr)--;
	cout<<"The Value Of a After Post Decrement Is : "<<a<<"\n";

	//pre Decrement
	--(*ptr);
	cout<<"The Value Of a After Pre Decrement Is : "<<a<<"\n";
	
	cout<<"\n\nThe Final Value Of a Is : "<<a;
	
	return 0;
}


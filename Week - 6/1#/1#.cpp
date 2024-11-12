#include<iostream>
using namespace std;

int main(){
	cout<<"To Add Two Numbers Using Pointers --> \n";
	cout<<"----------------------------------\n";
	
	int num1,num2,sum;
	
	int *ptr1,*ptr2;
	
	cout<<"\nEnter First Number : ";
	cin>>num1;
	
	cout<<"Enter Second Number : ";
	cin>>num2;
	
	ptr1=&num1; 
	ptr2=&num2;  
	
	sum=*ptr1+*ptr2; 
	
	cout<<"\n";
	cout<<"The Sum Of Numbers By Using Pointer Is :  "<<sum;
		
	return 0;
}


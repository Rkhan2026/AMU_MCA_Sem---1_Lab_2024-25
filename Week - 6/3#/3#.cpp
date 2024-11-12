#include<iostream>
using namespace std;

int main(){
	cout<<"Program To Print The Address Of A Variable Using Pointer --> \n";
	cout<<"------------------------------------------------------------\n";
	
	int A;
	int *ptr;
	
	cout<<"\nEnter Value Of Variable A : ";
	cin>>A;
	
	ptr=&A;

	cout<<"\nThe Address Of The Variable A Is : "<<ptr;
	
	return 0;
}


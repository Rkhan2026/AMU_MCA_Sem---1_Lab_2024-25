#include<iostream>
using namespace std;

int main(){
	cout<<"Swap Number Using Pointers -->\n";
	cout<<"--------------------------\n";
	
	int a,b;
	cout<<"\nEnter First Number : ";
	cin>>a;
	
	cout<<"Enter Second Number : ";
	cin>>b;
	
	int *ptr1,*ptr2,temp;
	
	ptr1=&a;
	ptr2=&b;
	
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	
	cout<<"\n";
	
    cout<<"After Swaping Using Pointers : \n\n";
	cout<<"First Number : ";
	cout<<a;
	
	cout<<"\nSecond Number: ";
	cout<<b;
	
	return 0;
}


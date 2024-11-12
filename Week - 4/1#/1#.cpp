#include<iostream>

using namespace std;

int main()
{
	int a;

	cout<<"Enter A Number To Check Whether It Is Even Or Odd : ";
	cin>>a;
	
	cout<<"\n";
	
	(a%2==0)?(cout<<a<<" Is Even"):(cout<<a<<" Is Odd");

	return 0;
}

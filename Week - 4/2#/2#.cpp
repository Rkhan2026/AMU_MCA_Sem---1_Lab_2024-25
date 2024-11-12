#include<iostream>
using namespace std;

// for loop approach 
int add(int a,int b){
	for(int i=1;i<=b;i++){
		a++;
	}
	return a;
}

//Bit wise addition approach
int addusingbitwise(int a,int b){
	while(b!=0){
		int sum =a^b;
		int carry=(a&b)<<1;
		a=sum;
		b=carry;
	}
	return a;
}
int main(){
	cout<<"Write a cpp progam to add two Numbers without + operator \n";
	cout<<"---------------------------------------------------------\n";
	int a,b;
	cout<<"Enter Number a: ";
    cin>>a;
	cout<<"Enter Number b: ";
	cin>>b;
	int sum=add(a,b);
	cout<<"\nSum of two Number using for loop is : "<<sum<<"\n";
	sum=addusingbitwise(a,b);
	cout<<"\nSum of two Number using for Bitwise Operation : "<<sum<<"\n";
	return 0;
}

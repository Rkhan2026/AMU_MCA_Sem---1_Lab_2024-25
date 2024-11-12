#include <iostream>
using namespace std;
int main(){
	
	cout<<"To Evaluate The Arithmetic Expression ((a + b / c * d - e) * (f - g))\n";
	cout<<"------------------------------------------------------\n";
	
	float a,b,c,d,e,f,g;
	float operation;
	
	cout<<"Enter The Value Of a : ";
	cin>>a;
	cout<<"Enter The Value Of b : ";
	cin>>b;
	cout<<"Enter The Value Of c : ";
	cin>>c;
	cout<<"Enter The Value Of d : ";
	cin>>d;
	cout<<"Enter The Value Of e : ";
	cin>>e;
	cout<<"Enter The Value Of f : ";
	cin>>f;
	cout<<"Enter The Value Of g : ";
	cin>>g;
	
	operation = ((a+b/c*d-e)*(f-g));
	
	cout<<"\nThe Result of Evaluating The Arithmetic Expression ((a + b / c * d - e) * (f - g)) Is : "<<operation;
}

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	cout<<"To Determine the square root of a Quadratic Equation:\n";
	cout<<"--------------------------------------------------------------------------------\n";
	
	float a,b,c,firstroot,secondroot,discriminant,realpart,imginarypart;
	
	cout<<"Enter the Coefficients of Quadratic equation {a,b,c} : \n";
	
	cout<<"\nEnter a : ";
	cin>>a;
	
	cout<<"Enter b : ";
	cin>>b;
	
	cout<<"Enter c : ";
	cin>>c;
	
	discriminant=b*b-4*a*c; //discriminent
	
	cout<<"\nDiscriminant Is : "<<discriminant;
	
	cout<<"\n";
	
	//Discriminant greater than zero is real and different 
	if(discriminant>0){
		
		firstroot=(-b+sqrt(discriminant))/(2*a);
		secondroot=(-b-sqrt(discriminant))/(2*a);
		
		cout<<"\nRoot are Real and Different";
		cout<<"First Root = "<<firstroot<<" And Second Root = "<<secondroot;
	}
	
	//Equals to zero both root are real and equal.
	else if(discriminant==0){
		
		firstroot=-b/(2*a);
		
		cout<<"\nRoots are Real and Same Root = "<<firstroot;
	}
	
	//less than are imaginary roots 5+9i i.e divided into real and imginary parts.
	else{
		realpart= -b/(2*a);
		
		float disc = - discriminant;
		imginarypart= sqrt(disc)/(2*a);
		
		cout<<"\nRoots are complex and Different\n";
		cout<<"\nFirst Root = "<<realpart<<"+"<<imginarypart<<"i"<< " And Second root = "<<realpart<<"-"<<imginarypart<<"i";
	}
	return 0;
}


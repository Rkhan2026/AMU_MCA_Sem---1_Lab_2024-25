#include<iostream>
using namespace std;

int main(){
    
	cout<<"To Determine whether a given 3 digit number is a Armstrong Number or Not.\n";
    cout<<"-----------------------------------------------------------\n";
    
	int num,r,sum=0,armstrong;
    
	cout<<"Enter a 3 digit Number : ";
    
	cin>>num;
	
	if (num>=100 && num<=999) {
		armstrong=num;
    
		while(num>0){
    		r = num%10; 
    		sum = sum + (r*r*r);
    		num = num/10;
		}
		
		if(armstrong==sum)
			cout<<"\nEntered 3 digit Number is Arnmstrong Number.";
		else
			cout<<"\nEntered 3 digit Number is not an Armstrong Number";
	}
    else {
    	cout<<"Please enter 3 digit number or valid nummber";
	}
		
	return 0;
}

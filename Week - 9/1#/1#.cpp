#include<iostream>

using namespace std;

int fac_nonrecursive(int number){
    
	if(number==0 || number==1){
        return 1;
    }
    
    else{
        
		int factorial=1;
        
		for (int i = 1; i <= number; ++i)
        {
            factorial=factorial*i;
        }    
        
        return factorial;
    }
    
}

int fac_recursive(int number){
    
	if(number==0 || number==1){
        return 1;
    }
	
	else{
        return number*fac_recursive(number-1);
    }
    
}

int gcd_nonrecursive(int a,int b){
    
	while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
	return a;
}

int gcd_recursive(int a,int b){
    
	if(b!=0){
        return gcd_recursive(b,a%b);
    }
	
	else{
        return a;
    }
}

int main(){
    cout<<"Program to find Factorial and Greatest Comman Divisor By Both Recursive and Non Recursive Approach.";
    cout<<endl;

	int number;
	
	cout<<"\n\nFactorial Of A Given Integer --> \n";
    
	cout<<"\nEnter a Number to find Factorial: ";
    cin>>number;
    
    if (number>=0) {
    	
		cout<<"\nFactorial Using Non Recursive Approach : "<<fac_nonrecursive(number);
    	cout<<"\n";
    	cout<<"\nFactorial Using Recursive Approach : "<<fac_recursive(number);
    	
	}
	else if(number < 0) {
		
		cout<<"\n";
		cout<<"Invalid Input !! Factorial of negative number is not posible ";
		
	} 
    
    cout<<"\n\n\n";
	
	int a,b;
	cout<<"\nGreatest Common Divisor Of Two Given Integers --> \n";
    
	cout<<"\nEnter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    
	if (a>=0 && b>=0) {
     
	 cout<<"\nThe GCD with Non Recursive Approach is : "<<gcd_nonrecursive(a,b);
     cout<<"\n";
     cout<<"\nThe GCD with Recursive Approach is : "<<gcd_recursive(a,b);
     
	}
	
	else if(a<0 || b<0) {
		
		cout<<"\nInvalid Input !! GCD of negative numbers is not posible ";
		
	} 
   
    return 0;
}

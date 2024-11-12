#include <iostream>
using namespace std;

class arithmetic
{

public:
  
  double add(double a, double b)
  {
    return a + b;
  }
  
  double sub(double a, double b)
  {
    return a - b;
  }
  
  double mul(double a, double b)
  {
    return a * b;
  }
  
  double div(double a, double b)
  
  {
    if (b == 0.0){
    	cout << "\nError! Division By Zero Is Not Allowed." << endl;
	}
      
    else{
    	return a / b;
	}
      
  }
  
};

int main()
{
  	arithmetic ar;
  
  	int a, b;
  
  	int n;

  	cout << "Enter First Number : ";
  	cin >> a;
  	cout << "Enter Second Number : ";
  	cin >> b;

	cout<<"\n";
  	cout<<"\nMenu\n";
  	cout<<"\n1. Addition\n";
  	cout<<"2. Subtraction\n";
  	cout<<"3. Multiplication \n";
  	cout<<"4. Division\n";
  	cout<<"0. Exit";
  
  
  	operations: 
  
	do { 
	
  			cout<<"\n\nEnter Operation Number To Perform That Operation --> ";
  			cin>>n;
  
  		switch (n)
  		{
  			case 1:
    			cout << "\nAddition Of " << a << " And " << b << ": " << ar.add(a, b);
    			break;

  			case 2:
    			cout << "\nSubtraction Of " << a << " And " << b << ": " << ar.sub(a, b);
    			break;

  			case 3:
    			cout << "\nMultiplication Of " << a << " And " << b << ": " << ar.mul(a, b);
    			break;

  			case 4:
    			cout << "\nDivision Of " << a << " And " << b << ": " << ar.div(a, b);
    			break;

  			
			case 0: 
                cout << "\nExiting Program"; 
                return 0; 
                break; 
			  
			default:
    			cout << "\nInvalid Choice.";
    			
  		} 
  		
    } while (n != 0); 
  
    goto operations; 

    return 0;
}

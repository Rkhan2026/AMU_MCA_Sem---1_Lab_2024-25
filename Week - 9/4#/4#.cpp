#include<iostream>
using namespace std;
 
void swap_value(int a,int b){
  
  	int temp=a;
  	a=b;
  	b=temp;
  
  	cout<<"\na : "<<a;
  	cout<<"\nb : "<<b;
  
}

void swap_reference(int &a,int &b){
    
	int temp=a;
    a=b;
    b=temp;
    
    cout<<"\na : "<<a;
    cout<<"\nb : "<<b;
}

int main(){
  
	int a,b,ch;
    
    cout<<"Choose Option :-";
    
    cout<<"\n";
    
    cout<<"\n1.Swap via Call By Value";
    cout<<"\n2.Swap via Call By Refernce Mechanism\n";
    
    cout<<"\nEnter Valid Choice i.e 1 Or 2 : ";
    cin>>ch;
    
	switch (ch)
    {
		case 1:
			cout<<"\nSwap via Call By Value --> \n";
			
			cout<<"\nEnter a : ";
        	cin>>a;
        	cout<<"\nEnter b : ";
        	cin>>b;
        	
        	cout<<"\nSwap via Call By Value Result Is Printed In Function Itself : ";
        	
			swap_value(a,b);
			
			cout<<"\n\nSwap via Call By Value Result Is Not Reflected In Actual Value Of The Variables As We Can See Below: ";
			
			cout<<"\na : "<<a;
        	cout<<"\nb : "<<b;
        	break;
    	
		case 2:
			cout<<"\nSwap via Call By Refernce Mechanism --> \n";
			
			cout<<"\nEnter a : ";
        	cin>>a;
        	cout<<"\nEnter b : ";
        	cin>>b;
  
			cout<<"\nSwap via Call By Refernce Mechanism Result Is Printed In Function Itself : ";
        	
			swap_reference(a,b);
			
			cout<<"\n\nSwap via Call By Value Result Is Reflected In Actual Value Of The Variables As We Can See Below: ";
			
			cout<<"\na : "<<a;
        	cout<<"\nb : "<<b;
			
			break;
    	
		default:
        
		break;
    }

    return 0;
}

#include<iostream>

using namespace std;

struct companyemployes
{
 
 string name;
 int basicpay;
 float DA;
 float grosspay; 
 
};

int main(){

   int size;
   
   cout<<"\nEnter The Number Of Employees Whose Data You Wish To Store And Compute Their Monthly Pay : ";
   cin>>size;
   
   cin.ignore();
   
   if(size==0 || size<0){
        cout<<"Size Cannot Be Zero Or Negative";
    }
   
   else {
   		companyemployes employ[size];
   
   		for (int i = 0; i <size; i++)
   		{
			cout<<"\n\nEnter Employee Details --> ";
			
			cout<<"\n\nEnter Employee Name : ";
    
			getline(cin, employ[i].name);
	
    
			cout<<"Enter Employee Basic Pay : ";
    
			cin>>employ[i].basicpay;
	
			cin.ignore();
    
			employ[i].DA=(0.52*employ[i].basicpay);
    
			employ[i].grosspay=(employ[i].basicpay+employ[i].DA);
	
   		}
   		
   		for (int i = 0; i <size; i++)
   		{
		   	cout<<"\n\nEmployee Details Are As Follows :- \n";
			
			cout<<"\nEmploy Name : "<<employ[i].name;
    		
			cout<<"\nEmploy Gross Salary : "<<employ[i].grosspay;
			
			cout<<"\n\n";
		}
	}
   
   return 0;
   
}

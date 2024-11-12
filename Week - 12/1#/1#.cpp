#include<iostream>
using namespace std;

class Person
{
private:
    string Name;
    int Roll_Number;

public: 
	Person(){
      	cout<<"Enter Name : "<<Name;
      	getline(cin, Name);
      	
      	cout<<"\nEnter Roll Number : ";
      	cin>>Roll_Number;		
    }
    
	void Display_Details(){    
		cout<<"\n\nDetails --> ";    
		cout<<"\n\nName : "<<Name<<endl;
        cout<<"\nRoll Number : "<<Roll_Number<<endl;     
    }
};

int main(){
	// creating object of class using default constructor
    Person obj;  
    // printing class data members 
    obj.Display_Details();
}

#include <iostream>
using namespace std;

struct DOB
{
    int day;
    string month;
    int year;
};

struct Person
{
    string name;
    DOB dob;// using 'DOB' structure as nested structure inside 'Person' Structure
};

void printstruct(Person p){
    cout<<"\nName : "<<p.name;
    cout<<"\nDate Of Birth : "<<p.dob.day<<"-"<<p.dob.month<<"-"<<p.dob.year;
}

int main()
{
    Person p1;
    
	cout<<"Enter The Name : ";
	
	getline(cin, p1.name);

    cout<<"\nEnter The Birth Day: ";
    
	cin >> p1.dob.day;
    
	cin.ignore();
    
	cout<<"\nEnter The Birth Month: ";
    
	cin>>p1.dob.month;
    
	cin.ignore();
    
	cout<<"\nEnter The Birth Year: ";
    
	cin>>p1.dob.year;
    
	cin.ignore();

	cout<<"\nUsing The Concept Of Nested Structures To Display Your Name And Date Of Birth :- \n";
    
    printstruct(p1);

    return 0;
}

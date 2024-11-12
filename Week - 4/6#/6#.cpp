#include <iostream>
using namespace std;

int main()
{
    char ch;
    
	cout<<"Enter any character : ";
    cin>>ch;
    
	int a = (int)ch;
	
	cout<<"\n 1.Using switch case statement : ";
    
	switch(a)
    {
    	case 97 ... 122 :
    		cout<<"Your character is Lower case alphabet ";
    		break;
    	case 65 ... 90: 
			cout<<"Your character is Upper case alphabet ";
			break;
		case 48 ... 57: 
			cout<<"Your character is Nummeric ";
			break;
		case 0 ... 47:
			cout<<"Your character is Special character ";
			break;
		case 58 ... 64:
			cout<<"Your character is Special character ";
			break;
		case 91 ... 96 :
			cout<<"Your character is Special character ";
			break;
		case 123 ... 127 :
			cout<<"Your character is Special character ";
			break;
	}
	
	cout<<"\n 2.Using if else : ";
   
	if (a>=97 && a<=122)
    	cout<<"Your character is Lower case alphabet";
    else if (a>=65 && a<=90)
    	cout<<"Your character is Upper case alphabet";
    else if (a>=48 && a<=57)
    	cout<<"Your character is Numeric";
    else if (a>=0 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=127 )
    	cout<<"Your character is Special character ";
    	
    return 0;
}

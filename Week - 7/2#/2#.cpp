#include <iostream>
using namespace std;

int main()
{
    char inputString[100]; 
 
    cout << "Enter A String : "; 
    
	cin.getline(inputString,100); 
    
	char *str = inputString;
	
	int count = 0; 
 
    while ((*str) !='\0') { 
        count++; 
        str++;  
    } 
 
    cout << "\nLength Of The String Is : " << count;
}

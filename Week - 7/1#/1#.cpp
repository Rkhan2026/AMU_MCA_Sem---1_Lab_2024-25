#include <iostream>
using namespace std;

int main()
{
	char inputString[100]; 
 
    cout << "Enter A String : "; 
    cin.getline(inputString,100); 

	int count = 0; 
 	
	char *ch;
	ch = inputString; 
    
	while ((*ch) != '\0') { 
        if (*ch == 'a' || *ch == 'e' || *ch == 'i' || *ch == 'o' || *ch == 'u' || 
		*ch == 'A' || *ch == 'E' || *ch == 'I' || *ch == 'O' || *ch == 'U') 
		{ 
            count++; 
        } 
        ch++;   
    }
	
    cout << "\nNumber Of Vowels In The String : " << count << endl;
}

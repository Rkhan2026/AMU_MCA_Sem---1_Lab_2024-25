#include <iostream> 

using namespace std; 
 
void decimalToBinary(int num) { 

    if (num == 0) { 
        cout << "\nBinary Representation : 0" << endl; 
        return; 
    } 
 
    int binary[32]; 
    int i = 0; 
 
    while (num > 0) { 
        binary[i] = num % 2; 
        num = num / 2; 
        i++; 
    } 
 
    cout << "\nBinary Representation : "; 
    
	//we start iteration from last as most significant bit and least significant bit of e.g 8 is first 1 and last 0 from 1000 
	//and since storage of eleemnts in array is 0001 so we start from last. same case for octal and hexadecimal
	
	for (int j = i - 1; j >= 0; j--) { 
        cout << binary[j]; 
    } 
    
    cout << endl; 
    
} 
 
void decimalToOctal(int num) { 

 	if (num == 0) { 
        cout << "\nOctal Representation : 0" << endl; 
        return; 
    } 

    cout << "\nOctal Representation : "; 
    int octal[100]; 
    int i = 0; 
 
    while (num > 0) { 
        octal[i] = num % 8; 
        num = num / 8; 
        i++; 
    } 
 
    for (int j = i - 1; j >= 0; j--) { 
        cout << octal[j]; 
    } 
    
    cout << endl; 
    
}
void decimalToHexadecimal(int num) { 

 	if (num == 0) { 
        cout << "\nHexadecimal Representation : 0" << endl; 
        return; 
    } 

    cout << "\nHexadecimal Representation: "; 
    char hexadecimal[100]; // char array is used becuase hex numners have alphabets sometimes 
    int i = 0; 
 
    while (num > 0) { 
    
        int remainder = num % 16; 
        
		if (remainder < 10) { 
			// remainder + '0' is used becuase since we are converting the integer num to its
			//ascii value as hex array is char array for eg 5 + '0' becomes 5 + 48 as '0' is 48 
			//in ascii so total = 53 and ascii value of 5 is 53.
            hexadecimal[i] = remainder + '0'; 
        } 
		
		else { 
		 	//since starting from 10 to 15, bit is stored from A to F.
			// remainder - 10 + 'A' means that if rem is 12 then 
			//12-10 + 'A' = 2 + 'A' = 'C' as character is incremneted by 2 
            hexadecimal[i] = remainder - 10 + 'A';
        } 
        
        num = num / 16; 
        i++; 
    } 
 
    for (int j = i - 1; j >= 0; j--) { 
        cout << hexadecimal[j]; 
    } 
    cout << endl; 
    
} 
 
int main() { 
    int num, choice; 
    
    cout << "Enter A Decimal Integer : "; 
    cin >> num; 
 
	
	cout << "\n\nChoose Operation :\n"; 
    
	cout << "\n1. Convert To Binary"; 
    cout << "\n2. Convert To Octal"; 
    cout << "\n3. Convert To Hexadecimal\n"; 
    cout << "0. Exit \n"; 
  
	operations: 
  
	do { 
	
		cout<<"\nEnter Operation Number To Perform That Operation --> ";
  		cin>>choice;
 
    	switch (choice) { 
    
    	case 1: 
           		decimalToBinary(num); 
            	break; 
        
		case 2: 
            	decimalToOctal(num); 
            	break; 
        
		case 3: 
				decimalToHexadecimal(num); 
				break; 
			
		case 0: 
            	cout << "\nExiting Program"; 
            	return 0; 
            	break;   	
		
		default: 
				cout << "\nInvalid Choice!" << endl; 
			
	} 
	
	} while (choice != 0); 
  
    goto operations; 
  
	return 0; 
} 

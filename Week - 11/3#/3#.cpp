#include <iostream>
using namespace std;

class Operations
{

public:
    int reverse(int num)
    {
        int rem, rev = 0;
        
		while (num > 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num/ 10;
        }
        return rev;
    }
    
    int sumwithreverse(int num, int rev){
    	 int sum_n_r = num + rev; 
    	 return sum_n_r;
	}
    
	void sumOfAlternate(int num)
    {
        int sumEven = 0;
        int sumOdd = 0;
        int index = 0; //Stores even or odd index of digit
        int rem;

        while (num > 0)
        {
            rem = num % 10;
            
			if (index % 2 == 0) 
			//for eg in first case we get index = 0 when so when 0 % 2 == 0 so if condition is executed so in case of 1234
			//we get first 0 + 4 (4 is rem) = 4 as even sum then in second iteration we get index == 1 as index is incremented
			//so 1 % 2 == 1 so else condition is executed then 0 + 3 (3 is rem) = 3 as odd sum and in third iteration when index == 2 so 2 % 2 == 0 
			//so if condition is executed we get 4 + 2 (2 is rem) = 6 as sum of even and finally we have when index == 3 then 3 % 2 == 1 so else is executed 
			// then 3  + 1 (1 is rem) = 4 as odd sum. finally 4 is odd sum and 6 is even sum
            {
                sumEven = sumEven + rem;
            }
            
			else  
            {
                sumOdd = sumOdd + rem; 
            }
            
			num = num / 10;
            
			index++;
        }

        cout << "\nSum Of Odd Positioned Digits : " << sumOdd << " And Sum Of Even Positioned Digits : " << sumEven;
    }
};

int main()
{
    Operations o; 
	int n; 
	int op;
    int rev; 
    int sum;
	int sum_altr_1;
	int sum_altr_2;    
    
	cout << endl<< "Enter A Four Digit Number : ";
    cin >> n;
    
    
	cout << "\n\nEnter Operation To Perform --> \n";
    cout << "\n1. Reverse Of Number\n";
    cout << "2. Sum Of Number And Its Reverse\n";
    cout << "3. Sum Of Alternative Digits (1 Digit + 3 Digit And 2 Digit + 4 Digit) \n";
    cout << "0. Exit \n";
	
	operations: 
  
	do { 
	
		if (n >= 1000 && n <= 9999)
    	{
			
			cout << "\n\nEnter Operation Number : ";
    		cin >> op;

    		switch (op) { 
    	
			case 1: 
            	rev = o.reverse(n);
            	cout << "\nReverse Of " << n << " Is : " << rev << endl; 
            	break; 
        
			case 2: 
				rev = o.reverse(n);
			
				sum = o.sumwithreverse(n, rev);
			
				cout << "\nSum Of " << n << " And Its Reverse "<<rev<<" Is : " << sum << endl; 
            	break; 
        
			case 3: 
            	o.sumOfAlternate(n);
            	break; 
            	
            case 0: 
                cout << "\nExiting Program"; 
                return 0; 
                break;   	
        
			default: 
            	cout << "Invalid Choice." << endl; 
            	return 1; 
			} 
        
    	}
    
		else
    	{
        	cout << "Please Enter A Four Digit Number Only! ";
    	}
    
    } while (n != 0); 
  
    goto operations; 
    
    return 0;
    
}

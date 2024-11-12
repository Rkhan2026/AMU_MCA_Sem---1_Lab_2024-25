#include <iostream>

using namespace std;

int position_of_string(char S[], char T[], int flag, int len_1, int len_2) {
	
		//A string is a sequence of characters so string dosent need to fullly match the full word to give match as in question 4
		
		int count=0; //if count never increases from 0 in flag==1 the it means that String T was never in String S
		
		for (int i = 0; i <= len_1; i++) { 
        	
			flag = 1;
        	
			//below loop we keep iterating till we finally get the strat index i of String T in String S 
			//so then flag dosent reset to 0 and breaks out of the inner loop to the outer loop
			//since now flag == 1 condition true so we get start index if present
			
			for (int j = 0, k = i; j < len_2; j++, k++) {
             	
				 if (S[k]!= T[j]) {
                	flag = 0;
                	break;
            	}
        	}
        	
        	if (flag == 1) {
            	cout<<"\nThe String 'T' Occurs In String 'S' From Index Position : "<<i;
            	count++; //if count never increases from 0 in flag==1 the it means that String T was never in String S
        	}
    	}

	// if count never increases from 0 in flag == 1 condition then it means that String T was never contained in String S
	if (count==0) {
		cout << "\nString S Doesn't Contain String T So 1 Is Displayed According To Question.\n" << endl;
	}
    
}

int main() {
	char S[100]; char T[100]; int flag=0;
	int len_1=0; int len_2=0;
    
    cout<<"\nEnter The Main String: ";
    cin.getline(S,100);
    	
    cout<<"\nEnter The Substring: ";
    cin.getline(T,100);
    	 	
    for (len_1 = 0; S[len_1] != '\0'; len_1++);
	
	for (len_2 = 0; T[len_2] != '\0'; len_2++);
	
	position_of_string(S, T, flag, len_1, len_2);
	
	return 0;
} 

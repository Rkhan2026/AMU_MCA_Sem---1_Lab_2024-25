#include <iostream>

using namespace std;

void insert_substring(char mainstring[], char substring[], int position, int len_1, int len_2) {
        // Create a new string so we can insert the mainstring characters after the new substring is inserted
    	char str_copy[len_1];

    	// Copy the main string to a third string for storing it for later use as we will use it in the end 
    	for (int i = 0; i < len_1; i++) {
        	str_copy[i] = mainstring[i];
    	}
		
		// replacing the characters from the position start till the new substring is inserted
    	for (int i = 0; i < len_2; i++) {
    		
			//Copy the substring to the mainstring from the position + i i.e if p = 3 and i= 0
    		//then [3+0] = [0], [3+1] = [1] and so on since we repalce the entire rest of mainstring with substring
        	
			mainstring[position + i] = substring[i]; //substring iteration starts from 0 its first element
    	}

    	// Copy the remaining part of the main string from the third string which was used to copy main string back to the main string itself 
    	// after insertion of substring
    	//we start iteration from where the entire psotion + lenegth of the substring so end of mainstring
    	//total length will be len_1+len_2 since new susbtring addded
    	
		for (int i = position + len_2; i < len_1 + len_2; i++) {
        	mainstring[i] = str_copy[i - len_2];//e.g. [8] = [3], [9]=[4] always the differenc is of length of new substring
    	}
		
		mainstring[len_1+len_2] = '\0'; //do this sicne length of string will increase after insertion of substring
		
		cout<<"\n\nResultant String After Insertion Of Substring : "<<mainstring;
	
}

void delete_n_characters(char mainstring[], int position, int n, int len_1) {
		// Shift the remaining characters to the left since deletion goes 
		//forward so elements will be shifted left to show that deletion occured
		
		//we start iteration from the position from where deletion starts + number of elements to be deleted
    	for (int i = position + n; i < len_1; i++) {
    		// in mainstring we start from i-n basically so for e.g. if i=4+3 and n=3 the i-n=4 
    		//so 4th element place is replaced by 7th element and 5th by 8th and so one
    		//basically differnece will be of numbebr of characters to delete
        	mainstring[i - n] = mainstring[i];
    	}
    	
    	mainstring[len_1 - n] = '\0'; //since array will be n characters short as n chaarcters deleted so we end the char arary

		cout<<"\n\nResultant String After Deletion : "<<mainstring;
}

int main() {
	char mainstring[100]; char substring[100]; int position, choice, n; int len_1=0; int len_2=0;
	
	cout<<"C++ Program That Uses User Defined Functions To Perform The Following Operations --> ";
    
	cout<<"\n\n1.Insert a Substring From A Given Position. \n2.Delete 'n' Characters From A Given Position";
    cout<<"\n";
	
	cout<<"\nEnter Choice 1 Or 2 : ";
	cin>>choice;
    cin.ignore(); //Clear newline buffer
    
    switch (choice)
    {
    case 1:
    	
		cout<<"\nYou Have Chosen Choice 1";
    	
		cout<<"\n\nEnter The Main String: ";
    	cin.getline(mainstring,100);
    	
        cout<<"\nEnter The Substring: ";
        cin.getline(substring,100);
    	
       for (len_1 = 0; mainstring[len_1] != '\0'; len_1++);
       for (len_2 = 0; substring[len_2] != '\0'; len_2++);
		
		cout<<"\nEnter The Position To Insert The Substring: ";
        cin>>position;

        if(position<0 || position>len_1){
            cout<<"\nInvalid Position So Please Enter Valid Position Present In Main String ";
        }
        
        insert_substring(mainstring, substring, position, len_1, len_2);
		
		break;

	case 2:
		
		cout<<"\nYou Have Chosen Choice 2";
		
		cout<<"\n\nEnter the Main String: ";
    	cin.getline(mainstring,100);
    
     	for (len_1 = 0; mainstring[len_1] != '\0'; len_1++);
		
        cout<<"\nEnter The Position In Main String From Where You Want To Delete Characters : ";
        cin>>position;
        
		cout<<"\nEnter The Number Of Characters You Want To Delete After "<<position<<" Index Position :";
        cin>>n;

        if(position<0 || position>len_1 || n<1){
            cout<<"\nInvalid Position So Please Enter Valid Position Present In Main String Or Number Of Charcaters To Be Deleted Is Less Than 1.";
        }

		delete_n_characters(mainstring, position, n, len_1);
        break;

    default:
        cout<<"\nEnter A Valid Choice !";
        break;
    
    }
    
	return 0;
} 

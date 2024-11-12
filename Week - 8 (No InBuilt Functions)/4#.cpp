#include <iostream>

using namespace std;


void count_word(char text[], char word[], int i, int j, int count, int len_2) {
	//Every sequence of characters and numbers between whitespace (spaces, tabs, and newlines) is considered a word. 	
	//so there should be a full exact match between user input and the word in string
	
	for (len_2 = 0; word[len_2] != '\0'; len_2++);

    for (i = 0; text[i] != '\0'; i++) {
        	int k = i;
		
			//either word should have whitespace before it but in case of first word we still execute if condition since
			//there is no whitespace before first word
			if (text[i-1] == ' ' || i==0 ) {
				
				//below loop is for getting 'j' such that 'j' starts from 0 to the length of the word that we need the count of  
				//and accordingly 'k' starts from the starting index of when the word occurs in the original sentence to the end index of 
				//when the occurenc of word ends in original sentence
				
				//value of 'j' resets after every occurence is counted so we can start again from the next iteration of the outer loop
				//to check for the word occurence
				
				for (j = 0; word[j] != '\0' && text[k] == word[j]; j++, k++) {}	
						
						//equal to word length so we can use the if condition to count the word occurence
						if (j == len_2) {
							
							//either the next character after word should be whitespace but in case the word is at the end of charcter array 
							//so there is no whitespace after it then we still execute if condition 
							//using the condition that the next character is null charcter i.e end of char array 
							
							if (text[k] == ' ' || text[k] == '\0') {
								
								count++;
							//for next itertaion of loop after the word has been counted each time since if we do this then 
							//the next iteration will start after the last index position of the previous word counted
								i = k - 1;
							}
							
						}				
        	}
        	
    }
		
		cout << "\nThe Word '" << word << "' Occurs " << count << " Times." << endl;
	}
    


int main() {
    char text[100], word[100];
    int i, j, count = 0; int len_2;
    
    cout << "\nEnter A String: ";
    cin.getline(text,100);

    cout << "\nEnter The Word To Count Occurence Of : ";
    cin.getline(word,100);
    
	count_word(text, word, i, j, count, len_2);
	
    return 0;
}

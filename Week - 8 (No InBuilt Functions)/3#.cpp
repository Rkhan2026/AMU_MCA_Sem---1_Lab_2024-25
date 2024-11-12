#include <iostream>

using namespace std;

void replaceSubstring(char sentence[], char oldString[], char newString[]) {
	
	int sentenceLength;
    int oldStringLength;
    int newStringLength;
	
	for (sentenceLength = 0; sentence[sentenceLength] != '\0'; sentenceLength++);
    for (oldStringLength = 0; oldString[oldStringLength] != '\0'; oldStringLength++);
    for (newStringLength = 0; newString[newStringLength] != '\0'; newStringLength++);
    
    int index = 0;

    while (index < sentenceLength) {
        bool found = true;
        for (int i = 0; i < oldStringLength && index < sentenceLength; i++) {
            if (sentence[index + i] != oldString[i]) {
                found = false;
                break;
            }
        }

        if (found) {
        	
        	if (oldStringLength>=newStringLength) {
        			// we start iteration from e.g i = 3+3, basically position 
			//just after the string to be replaced has ended e.g My name is, nam starts from 3 and ends on 5 so i = 6
			
			for (int i = index + oldStringLength; i < sentenceLength; i++) {
            	//basiclaly [6-3+2] if new string is of 2 length and old is of 3 then 
				// so [5] = [6] so we get the character just after nam which is to come on 5 as he will only
            	//take 3 and 4 index values
                sentence[i - oldStringLength + newStringLength] = sentence[i];
            }

            // Copy the new string into the replaced position
            for (int i = 0; i < newStringLength; i++) {
                sentence[index + i] = newString[i];
            }

			// Update the sentence length since sentence will now be for eg. 10 + 2 - 3 = 9 from 10 
            sentenceLength = sentenceLength + newStringLength - oldStringLength;
			}
			
			else if (newStringLength>oldStringLength) {
				
				char str_copy[sentenceLength];// re create str copy each time becuase otherwise wrong answer when too many replacemnts need to be done
				
				// we re create str copy each time becuase to get the updated index values of the charatcers after the old string has been replaced 
				//each time because otherwise wrong charatcers get pushed to the right of string
				for (int j = 0; j < sentenceLength; j++) {
        				str_copy[j] = sentence[j];
    			}
				
				//we only update the sentence length before inserting the remaining characters after the old string back to main sentence from str copy
				sentenceLength = sentenceLength + newStringLength - oldStringLength;
				
				//we finally shift the charcters to right to make space for new string
				for (int j = index + oldStringLength; j <sentenceLength ; j++) { 			
        			sentence[j + newStringLength - oldStringLength] = str_copy[j];
     		
    			}		
				
				// Copy the new string into the replaced position
				for (int j = 0; j < newStringLength; j++) {
                	sentence[index + j] = newString[j];
            	}  
			}
		          
        } else {
            index++;
        }
        sentence[sentenceLength]='\0';
    }
    
}

int main() {
    char sentence[600], oldString[50], newString[100];

    cout << "Enter A Sentence : ";
    cin.getline(sentence, 600);

    cout << "Enter The Old String: ";
    cin.getline(oldString, 100);

    cout << "Enter The New String: ";
    cin.getline(newString, 100);

    replaceSubstring(sentence, oldString, newString);

    cout << "\n\nModified Sentence After Old String Is Replaced And New String Is Inserted : " << sentence << endl;

    return 0;
}

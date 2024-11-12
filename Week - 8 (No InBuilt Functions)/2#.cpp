#include <iostream>
using namespace std;

int main()
{
    char s1[100]; int len, flag = 1;
    
	cout<<"Enter A String To Check Palindrome: "; 
	cin.getline(s1,100);
	
	for (len = 0; s1[len] != '\0'; len++);

    for(int i = 0; i < (len/2); i++){
        if(s1[i] != s1[len-i-1]){
            flag = 0;
            break;
        }
    }

    if(flag == 1){
        cout <<"\nGiven String Is A Palindrome";
    }
    else{
        cout <<"\nGiven String Is Not A Palindrome";
    }
    return 0;
}

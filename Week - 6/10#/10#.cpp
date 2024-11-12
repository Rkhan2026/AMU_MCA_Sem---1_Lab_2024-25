#include <iostream>

using namespace std;

int main()
{
	char s1[100];
	cout<<"Program To Reverse A String Using Pointers -->\n";
	cout<<"----------------------------------\n";
	
    cout << "\nEnter A String : ";
    
	cin.getline(s1, 100);

    int l = 0;
    
	while (s1[l]!='\0') {
		l++;
	}
    
	char *front = s1;
    char *back = s1 + l - 1;

    while (front < back) {
        char tmp = *front;
        *front = *back;
        front++;
        *back = tmp;
        back--;
    }
    
    cout << "\nReversed String : " << s1;

    return 0;
}


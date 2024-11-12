#include<iostream>
using namespace std;

int main()
{
	
	char s1[100], s2[100];
	
	cout<<"Program To concatenate two Strings Using Pointer --> \n";
	cout<<"----------------------------------\n";
	
    cout << "\nEnter First String : ";
    
	cin.getline(s1, 100);
	
	char *ptr1;
	ptr1 = s1;
    
	cout<<"Enter Second String : ";
	
	cin.getline(s2, 100);
	
	char *ptr2;
	ptr2 = s2;
	
	
	while((*ptr1)!='\0')
	{	
		 ptr1++;	 
	}
	
	*ptr1=' ';
	ptr1++;
		 
	while((*ptr2)!='\0')
	{
		*ptr1=*ptr2;
		 ptr1++;
		 ptr2++;
	}
	
	cout<<endl<<"\nConcatenated String Is : "<<s1;
	
	return 0;
}


#include<iostream>
using namespace std;

int main(){
	cout<<"Program To Print String Using Pointer --> \n";
	cout<<"---------------------------------------\n";
	
	char str1[100];
    cout << "\nEnter A String : ";
    
	cin.getline(str1, 100);
	
	char *ptr1;
	ptr1 = str1;
	
	cout<<"\nPrinting String Using Pointer : ";
	
	while((*ptr1)!='\0')
	{
		cout<<(*ptr1);
		ptr1++;
	}
	
	return 0;
}


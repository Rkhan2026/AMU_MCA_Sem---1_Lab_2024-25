#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout<<"Write A program For Reading Elements Using A Pointer Into The Array And Display The Values Using An Array.\n";
    cout<<"-------------------------------------------------------------------------";
	
	cout<<"\n\nEnter The Number Of Elements In The Array : ";
	cin>>n;
	
	int array[n]; 
	
	int *ptr = array; 
	
	cout<<"\n";
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter Element "<<i<<" : ";
		cin>>*ptr;
		ptr++;
	}
	
	ptr = array; 
	
	cout<<"\nYour Entered Elements Are : "<<endl;
	
	for(int i=1; i<=n; i++)
	{
		cout<<*ptr<<" ";
		ptr++;
	}
	
	return 0;
}


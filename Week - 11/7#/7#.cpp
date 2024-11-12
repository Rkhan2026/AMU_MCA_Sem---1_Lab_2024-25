#include<iostream>
using namespace std;

int main()
{
    int temp, len;
    
	cout<<"Enter The Length Of Array : ";
	cin>>len;
	
	int arr[len];
	
	cout<<endl;

	for(int i=0; i<len; i++)
	{
		cout<<"\nEnter Array Element At Position "<<i<<" : ";
		cin>>arr[i];
	}
	cout<<endl;
    
    cout<<"\nUnsorted Array Is : \n";
    
	for(int i=0; i<len; i++) {	 
		 cout<<arr[i]<<" ";	 
	}
	
	cout<<"\n\nSorting The Array Using Bubble Sort Algorithm In Ascending Order --> \n";
    
	for(int i=0; i<(len-1); i++)
    {
        for(int j=0; j<(len-i-1); j++) // j is < (len-i-1) becuase we use j+1 in if condition so we do iteration one less in for
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
	cout<<"\nThe Sorted Array In Ascending Order is : \n";
    
	for(int i=0; i<len; i++){
		 cout<<arr[i]<<" ";
	}
	
	return 0;
}

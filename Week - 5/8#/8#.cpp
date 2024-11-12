#include<iostream>
using namespace std;

int main()
{
	int len1, len2, len3, temp;
	
	cout<<"Enter the length of array 1 : ";
	cin>>len1;
	
	int array1[len1];
	
	cout<<endl;

	for(int i=0; i<len1; i++)
	{
		cout<<"\nEnter array element at position "<<i<<" : ";
		cin>>array1[i];
	}
	cout<<endl;
	
	for(int i=0; i<len1; i++)
	{
		for(int j=0; j<len1-1; j++)
		{
			if(array1[j]>array1[j+1])
			{
				temp=array1[j];
				array1[j]=array1[j+1];
				array1[j+1]=temp;
			}
		}
	}
	
	cout<<"\nHere is your 1st sorted array : ";
	
	for(int i=0; i<len1; i++)
	{
		cout<<" "<<array1[i];
	}
	
	cout<<"\n";
	
	cout<<"\nEnter the length of array 2 : ";
	cin>>len2;
	cout<<endl;
	
	int array2[len2];
	
	for(int i=0; i<len2; i++)
	{
		cout<<"\nEnter array element at position "<<i<<" : ";
		cin>>array2[i];
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<len2; i++)
	{
		for(int j=0; j<len2-1; j++)
		{
			if(array2[j]>array2[j+1])
			{
				temp=array2[j];
				array2[j]=array2[j+1];
				array2[j+1]=temp;
			}
		}
	}
	
	cout<<"\nHere is your 2nd sorted array : ";
	
	for(int i=0; i<len2; i++)
	{
		cout<<" "<<array2[i];
	}
	
	cout<<endl<<endl;
	
	len3=len1+len2;
	
	int MergeArray[len3];
	
	for (int i=0;i<len1;i++){
		MergeArray[i]=array1[i];
	}
	
	for (int i=0;i<len2;i++){	
		MergeArray[len1]=array2[i];	
		len1++;	
	}
	
	
	for(int i=0; i<len3; i++)
	{
		for(int j=0; j<len3-1; j++)
		{
			if(MergeArray[j]>MergeArray[j+1])
			{
				temp=MergeArray[j];
				MergeArray[j]=MergeArray[j+1];
				MergeArray[j+1]=temp;
			}
		}
	}
	
	cout<<"";
	
	cout<<"\nHere is your sorted and merged array : ";
	
	for(int i=0; i<len3; i++)
	{
		cout<<" "<<MergeArray[i];
		
	}
	
	return 0;
}


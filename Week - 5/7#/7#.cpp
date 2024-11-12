#include<iostream>
using namespace std;

int main()
{
	int len, neg=0, zero=0, pos=0, even=0, odd=0;
	
	cout<<"Enter length of array : ";
	cin>>len;
	
	int array[len];
	
	
	for(int i=0; i<len; i++)
	{
		cout<<"\nEnter element at position "<<i<<" : ";
		cin>>array[i];
	}
	cout<<endl;
	
	
	for(int i=0; i<len; i++)
	{
		if(array[i]>0) 
		{
			if(array[i]%2==0)
			{
				cout<<array[i]<<" is Positive and Even."<<endl;
				even++;
			}
			else
			{
				cout<<array[i]<<" is Positive and Odd."<<endl;
				odd++;
			}
			pos++;
		}
		else if(array[i]==0)
		{
			cout<<array[i]<<" is Zero and Zero Is Considered As Even Also."<<endl;
			even++;
			zero++;
		}
		else if(array[i]<0)
		{
			if(array[i]%2==0)
			{
				cout<<array[i]<<" is Negative and Even."<<endl;
				even++;
			}
			else
			{
				cout<<array[i]<<" is Negative and odd."<<endl;
				odd++;
			}
			neg++;
		}
	}
	
	
	cout<<endl<<endl;
	
	cout<<"Frequency of zeros are : "<<zero<<endl;
	cout<<"Frequency of positive Number are : "<<pos<<endl;
	cout<<"Frequency of negative Number are : "<<neg<<endl;
	cout<<"Frequency of even numbers are : "<<even<<endl;
	cout<<"Frequency of odd numbers are : "<<odd<<endl;

	return 0;
}


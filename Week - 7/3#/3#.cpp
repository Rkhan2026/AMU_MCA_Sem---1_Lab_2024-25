#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int len, sum = 0;
	
	cout<<"Enter The Length Of Your Array : "; 
	cin>>len;
	
	int array[len];	int *ptr = array; cout<<"\n";
	
	for(int i=0; i<len; i++) 
	{
		cout<<"Enter element "<<i<<" : ";
		cin>>*ptr;
		sum = sum + *ptr;
		ptr++;
	}
	
	float mean = sum/len; float SumOfSqDiff = 0; float stdDev; ptr = array; 
	
	for(int i=0; i<len; i++)
	{
		SumOfSqDiff = SumOfSqDiff + (*ptr - mean)*(*ptr-mean); // SumOfSqDiff = sum(element(i) - mean)^2
		ptr++;
	}
 
	stdDev = sqrt(SumOfSqDiff/len);// Standard Deviation = SumOfSqDiff/Total Number Of Elements
	
	cout<<endl<<"\nSum Is : "<<sum<<endl; cout<<"\nMean Is : "<<mean<<endl; cout<<"\nStandard Deviation Is : "<<stdDev;
	
	return 0;
}


#include<iostream>
using namespace std;
int main()
{
	int m, sum = 0;
	cout<<"Program Through A Pointer Variable To The Sum Of n Elements From The Array\n";
	cout<<"---------------------------------------------------------------------------\n";
	
	cout<<"\nEnter The Length Of Your Array : ";
	cin>>m;
	
	int array[m];
	int *ptr = array;
	
	cout<<"\n";
	
	for(int i=0; i<m; i++)
	{
		cout<<"Enter Element "<<i<<" : ";
		cin>>*ptr;
		ptr++;
	}
	
	ptr = array; 
	
	cout << "\nEnter Number Of Elements For Sum : "; 
    int n; 
    
	cin>>n; 
	
	if (n>1 && n<=m) {
		for (int i = 0; i < n; i++) 
    	{ 
        	sum = sum + *ptr; 
        	ptr++; 
    	}
		cout<<"\n\nThe Sum Of First "<<n<<" Elements Of Your Array Is : "<<sum;
	}

	else {
		cout<<"\nEnter Correct Number";
	}

	return 0;
}


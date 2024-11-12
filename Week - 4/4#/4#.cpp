#include <iostream>
using namespace std;

int main(){
	int sum,n,n1=0,n2=1,i;
	
	cout<<"Enter number to generate the first n terms of the sequence : ";
	
	cin>>n;
	
	cout<<"\nFirst n terms of fibonacci sequence is :  "<<n1<<" "<<n2;
	
	while(i<n-2){
		i=i+1;
		sum=n1+n2;
		n1=n2;
		n2=sum;
		cout<<" "<<sum;
			
	}
	return 0;
}

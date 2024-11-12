#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"To Print Prime Number between 1 to N:\n";
	cout<<"-------------------------------------\n";
	cout<<"\nFind Prime Number upto : ";
	cin>>n;
	cout<<"\nPrime Number between 1 and "<<n<<" are : ";
	
	if(n<2){
		cout<<"Invalid Entry ! No prime number can be less than 2";
	}
	
	for(int x=2; x<=n ;x++){
	
		int flag=0;
		
		for(int i=2; i<=x/2; i++){	
		    
			if(x%i==0){
				
			    flag=1;
				break;
			}
		}
		
		if(flag==0){
			cout<<x<<" ";
		}
	}
	return 0;
}

#include <iostream> 
using namespace std; 

int binarySearch(int arr[], int low, int high, int x) 
{ 
	while (low <= high) { 
		int mid = (high + low) / 2; 

		if (arr[mid] == x) 
			return mid; 
	
		if (arr[mid] < x) 
			low = mid + 1; 

		else
			high = mid - 1; 
	} 
	return -1; 
} 


int main() 
{ 
	int n,target,temp;
	
	cout<<"Enter The Length Of Array : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		cout<<"\nEnter The Element At Position "<<i<<" : ";
		cin>> arr[i];
	}
	
	cout<<"\nArray Elements Are : ";
	
	for(int i=0; i<n; i++){
		cout<< arr[i] <<" ";
	}
	
	cout<<"\n";
    
	for(int i=0; i<(n-1); i++)
    {
        for(int j=0; j<(n-i-1); j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
	cout<<"\n\nThe Sorted Array is : \n";
    
	for(int i=0; i<n; i++){
		 cout<<arr[i]<<" ";
	}
	
	cout<<"\n";
	
	cout<<"\n\nEnter Target Element For Binary Search Algorithm : ";
	
	cin>>target;
	
	int result = binarySearch(arr, 0, n - 1, target); 
	
	if (result == -1) {
		cout << "\nTarget Element Is Not Present In Array";
	}
	else {
		cout << "\nTarget Element Is Present At Index Value : " << result; 
	}	

	return 0; 
}


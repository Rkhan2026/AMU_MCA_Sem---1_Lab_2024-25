#include<iostream>
using namespace std;

void array_recursive(int arr[], int size, int index){
   
   // base case 
   if(index == size){
      return;
   }

   cout<<arr[index]<<" "; // print the ith element 

   array_recursive(arr, size, index+1);
   
}

int main(){
   
   cout<<"Display All Array Elements Using Recursion -->\n";
   int size;
   
   cout<<"\nEnter Size Of Array : ";
   cin>>size;
   int arr[size];
   
   cout<<"\n";
   
   //Insertion in array;
   cout<<"Enter Array Elements :- \n";

   for (int i = 0; i < size; i++)
   {
   	 	cout<<"\n";
    	cout<<"Enter Element Of Array At Position "<<i<<" : ";
    	cin>>arr[i];
   }

	cout<<"\n";
   
   //Displaying elements using recursion
   
   cout<<"Array Elements Displayed Using Recursion : ";
   array_recursive(arr, size, 0);
   
   return 0;
}

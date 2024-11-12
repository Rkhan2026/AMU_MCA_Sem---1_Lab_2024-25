#include<iostream>
using namespace std;

int sum_array( int arr[],int size,int index){
   
   if(index == size){
      return 0;
   }
   
   return arr[index] + sum_array(arr, size, index+1);
   
}

int main(){
   
   cout<<"Sum Of Elements Of Array Using Recursion -->\n";
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
   
   int result = sum_array(arr, size, 0);
   
   cout<<"Result Obtained After Sum Of Elements Of Array Using Recursion Is : "<<result; 
   
   return 0;
}

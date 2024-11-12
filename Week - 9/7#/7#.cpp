#include<iostream>
using namespace std;

int largest(int arr[],int max,int size){
   
   if (size == 0){
   	
      return max;
      
   }
   
   if(size>0){
   	
      if(arr[size]>max){
      	
         max = arr[size];
         
      }
      
   }

   return largest(arr, max, size-1);
   
}

int smallest(int arr[],int min,int size){
   
   if (size == 0){
   	
      return min;
      
   }
   
   if(size>0){
      
	  if(arr[size]<min){
         
		 min = arr[size];
		 
      }
      
   }
   
   return smallest(arr, min, size-1);
   
}

int main(){
   
   cout<<"To Find Maximum And Minimum Of Array Using Recrusion:\n ";
   
   int size; bool flag = true;
   
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

   int max=arr[0];
   int min=arr[0];
   
  
  	//we do this to check if all elements are same then flag 
	//remians true otherwise if any element is different then flag becomes false  
	for(int i = 0; i < (size/2); i++){
        if(arr[i] != arr[size-i-1]){
            flag = false;
        }
    }

   if (flag == true ){
   		cout<<"\nAll Elements Are Same So There Is No Minimum Or Maximum Element !";
   } else {
   	 	cout<<"\nThe Maximum Element Of Array is : "<<largest(arr,max,size-1);
   		cout<<"\nThe Minimum Element Of Array is : "<<smallest(arr,min,size-1);
   }
   
   return 0;
}

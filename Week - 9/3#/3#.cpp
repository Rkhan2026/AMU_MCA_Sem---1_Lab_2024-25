#include <iostream>

using namespace std;

const int MAX_ROWS = 50; const int MAX_COLS = 50;

void transpose(int row, int col, int arr[MAX_ROWS][MAX_COLS], int tras[MAX_COLS][MAX_ROWS]) {
	
	
    for (int i = 0; i < row; i++)
	{
		
    	for (int j = 0; j < col; j++)
    	{
        	tras[j][i] = arr[i][j];
    	}
    	
	}
	
    cout<<"\nTransposed Matrix Is : \n";
   
    for (int i = 0; i < col; i++)
	{
		
    	for (int j = 0; j < row; j++)
    	{
        	cout<<tras[i][j]<<" ";
    	}
    	cout<<endl;
    	
   }
	
}

int main(){
   cout<<"To Print The Tranpose Of A Matrix Using Functions\n";
   
   int mat[MAX_ROWS][MAX_COLS], trans[MAX_COLS][MAX_ROWS];
   
   int row,col;
   
   cout<<"\nEnter No. Of Rows Of Matrix : ";
   cin>>row;
   
   cout<<"\nEnter No. Of Columns Of Matrix : ";
   cin>>col;
   
   cout<<"\nEnter Elements of Matrix --> "<<endl;
   
   for (int i = 0; i < row; i++)
   {
    
		for (int j = 0; j < col; j++)
    	{
        	cout<<"\nEnter Element At Position "<<i<<j<<" : ";
        	cin>>mat[i][j];
    	} 
    
   }
   
   cout<<"\nThe Matrix : \n";
   
   for (int i = 0; i < row; i++)
   {
   	
    	for (int j = 0; j < col; j++)
    	{
        	cout<<mat[i][j]<<" ";
    	}
    
    	cout<<endl;
   }
   
   transpose(row, col , mat, trans);
   
   return 0;
}

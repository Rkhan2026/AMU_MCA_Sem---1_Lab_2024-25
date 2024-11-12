#include <iostream>

using namespace std;

int main() {
    int row1, col1, row2, col2;
	
	cout<<"Program to perform following operation --> \n";
	
	cout<<"\na. Addition of Two matrices: \n";
	cout<<"b. Multiplication of Two matrices: \n";
    
	cout << "\nEnter the number of rows for the first matrix : ";
    cin >> row1;
    cout << "Enter the number of columns for the first matrix : ";
    cin >> col1;

    cout << "\nEnter the number of rows for the second matrix : ";
    cin >> row2;
    cout << "Enter the number of columns for the second matrix : ";
    cin >> col2;
    
    cout<<"\n";
    
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    
    cout << "\nEnter the elements of the first matrix:" << endl;

    	for (int i=0;i<row1;i++){
		
			for(int j=0;j<col1;j++){
				cout<<"\nEnter element at ("<<i+1<<","<<j+1<<"): ";
				cin>>matrix1[i][j];
			}
		}
	
		cout<<"\n";
		
		for (int i = 0; i < row1; i++) {      
			for (int j = 0; j < col1; j++) {
            	cout << matrix1[i][j] << " ";
        	}        
        	cout << endl;       
    	}     

    cout << "\nEnter the elements of the second matrix:" << endl;
    
		for (int i=0;i<row2;i++){
		
			for(int j=0;j<col2;j++){
				cout<<"\nEnter element at ("<<i+1<<","<<j+1<<"): ";
				cin>>matrix2[i][j];
			}
		
		}
		for (int i = 0; i < row2; i++) {      
			for (int j = 0; j < col2; j++) {
            	cout << matrix2[i][j] << " ";
        	}        
        	cout << endl;       
    	}     
    
	cout<<"\n";
	
	//Matrix Addition
	if (row1 == row2 && col1 == col2) {
    	int sumMatrix[row1][col1];

    	for (int i = 0; i < row1; i++) {       
			for (int j = 0; j < col1; j++) {
            	sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        	}        
    	}     
		
		cout << "\nMatrix Addition Result:" << endl;
    
		for (int i = 0; i < row1; i++) {      
			for (int j = 0; j < col1; j++) {
            	cout << sumMatrix[i][j] << " ";
        	}        
        	cout << endl;       
    	}     
    }
    
    else{
    	cout<<"\nMatrix Addition Not Possible Due To Number Of Rows Or Columns Of Both Matrices Being Different";
	}
	
	cout<<"\n";
    
	//Matrix Multiplication
	if (col1==row2){
		int productMatrix[row1][col2];

    	for (int i = 0; i < row1; i++) {
        	for (int j = 0; j < col2; j++) {
            	productMatrix[i][j] = 0;
            	for (int k = 0; k < col1; k++) {
                	productMatrix[i][j] = productMatrix[i][j] + matrix1[i][k] * matrix2[k][j];
            	}
        	}
    	}

    	cout << "\nMatrix Multiplication Result:" << endl;
    
		for (int i = 0; i < row1; i++) {     
			for (int j = 0; j < col2; j++) {
            	cout << productMatrix[i][j] << " ";
        	}       
        	cout << endl;       
    	}		
	}
	else{
		cout<<"\nMatrix Multiplication Not Possible Since Number Of Columns Of First Matrix Not Equal To Number Of Rows Of Second Matrix ";
	}
    
    return 0;
}

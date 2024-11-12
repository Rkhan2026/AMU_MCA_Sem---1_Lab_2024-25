#include<iostream>
using namespace std;

//Declaring a structure
struct  complex
{
    float real,imaginary;
};

//we use function types as 'complex' and not float becuase since we are returning the complex number to read it
//after every operation so we use complex type as return since the number is made of both real and imaginary parts

//write Complex Numbers
complex write_complex_no(){
    
	complex num; // complex number = a + b.i where a is real and b is imaginary
    
	cout<<"\n";
    
	cout<<"\nEnter The Real Part Of Complex Number : ";
    cin>>num.real;
    
	cout<<"\nEnter The Imaginary Part Of Complex Number: ";
    cin>>num.imaginary;
    
    return num;
    
}

//Display i.e. read Complex Numbers
void read_complex_no(complex num){
	
	cout<<"\n";
	cout<<"\nThe Complete Complex Number is : "<<num.real<<" + "<<num.imaginary<<"i";

}

//Addition Of Two Complex Numbers
complex add_complex_no(complex num1,complex num2){
    
	complex addno; // (a+b.i) + (c+d.i) = (a + c) + (b + d)i
    
	addno.real = num1.real+num2.real;
    
	addno.imaginary = num1.imaginary+num2.imaginary;
    
	return addno;
    
}

complex subtract_complex_no(complex num1, complex num2)
{
    complex subtrac; // (a+b.i) - (c+d.i) = (a - c) + (b - d)i
    
	subtrac.real = num1.real - num2.real;
    
	subtrac.imaginary = num1.imaginary - num2.imaginary;
    
	return subtrac;
	
}

//Multiplication Of Two Complex Numbers
complex multiply_complex_no(complex num1,complex num2){
    
	complex multiply; // (a+b.i)*(c+d.i) = (a.c-b.d) + (a.d+b.c)i
    
	multiply.real = (num1.real*num2.real) - (num1.imaginary*num2.imaginary);
   
    multiply.imaginary = (num1.real*num2.imaginary) + (num1.imaginary*num2.real);
    
	return multiply;
	
}


int main(){
    
	cout<<"Program to Read, Write, Addition, Subtarction And Multiplication Of Two Complex Numbers Where Complex Numbers Are Represented";
	cout<<"Using A Structure --> \n";
	
	complex num1, num2, addition_result, subtraction_result, multiplication_result;

	
	cout<<"\nEnter First Complex Number :- ";
	num1 = write_complex_no();
	
	read_complex_no(num1);
	
	cout<<"\n\n";
    
	cout<<"\nEnter Second Complex Number : ";
	num2 = write_complex_no();
    
	read_complex_no(num2);
	
	cout<<"\n\n";
    
	
	cout<<"\nThe Addition of Complex Number 1 And Complex Number 2 :- ";
    
	addition_result = add_complex_no(num1,num2);
	
	read_complex_no(addition_result);
        	
	cout<<"\n\n";
	
	
	cout<<"\nThe Subtraction Of Complex Number 1 And Complex Number 2 :- ";
	
	subtraction_result = subtract_complex_no(num1, num2);
    
	read_complex_no(subtraction_result);
	
	cout<<"\n\n";
	
	
	cout<<"\nThe Multiplication Of Complex Number 1 And Complex Number 2 :- ";
	
	multiplication_result = multiply_complex_no(num1,num2);
    
	read_complex_no(multiplication_result);
    
    return 0;
   	
}

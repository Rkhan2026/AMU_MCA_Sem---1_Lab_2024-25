#include<iostream>
using namespace std;

class calculator
{
private:
    float num1,num2,num3,num4;

public:
	calculator(){
        num1=1;
        num2=1;
        num3=1;
        num4=1;
    }
    
	calculator(float a, float b){
        num1=a;
        num2=b;
        num3=1;
        num4=1;
    }
    
	calculator(float a, float b, float c, float d){
        num1=a;
        num2=b;
        num3=c;
        num4=d;
    }
    
	float add(){
        return num1+num2+num3+num4;
    }
    
	float sub(){
        return (num1-num2)-(num3-num4);
    }
    
	float mul(){
        return num1*num2*num3*num4;
    }
    
	float divide(){
        
		if(num2==0 || num3 ==0 || num4==0){
            cout<<"\n\nCannot Divide By Zero";
        }
        
		return num1/num2/num3/num4;
    }  
};
int main(){
    cout<<"Program to Show Parameterized Constructor Overloading --> \n";

    float a,b,c,d;
    
	cout<<"\n\nUsing Default Constructor With No Parameters Where All Numbers Are 1 -- :";
	
	calculator cal1; 
	
	cout<<"\n\nAddition Using Default Constructor: "<<cal1.add();
    cout<<"\n\nSubtraction Using Default Constructor: "<<cal1.sub();
    cout<<"\n\nMultiply Using Default Constructor: "<<cal1.mul();
    cout<<"\n\nDivide Using Default Constructor: "<<cal1.divide();
	

	cout<<"\n\n\nUsing Parameterized Constructor With 2 Values And Rest 2 Values Are 1 -- :";
	
	cout<<"\n\nEnter the value of a : ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    
	calculator cal2(a,b); 
    
	cout<<"\n\nAddition Using Parameterized With 2 Values Constructor: "<<cal2.add();
    cout<<"\n\nSubtraction Using Parameterized With 2 Values Constructor: "<<cal2.sub();
    cout<<"\n\nMultiply Using Parameterized With 2 Values Constructor: "<<cal2.mul();
    cout<<"\n\nDivide Using Parameterized With 2 Values Constructor: "<<cal2.divide();
	
	cout<<"\n\n\nUsing Parameterized Constructor With 4 Values -- :";
	
	cout<<"\n\nEnter the value of a : ";
    cin>>a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    cout<<"\nEnter the value of c : ";
    cin>>c;
    cout<<"\nEnter the value of d : ";
    cin>>d;
	
	calculator cal3(a,b,c,d);
	
	cout<<"\n\nAddition Using Parameterized With 4 Values Constructor: "<<cal3.add();
    cout<<"\n\nSubtraction Using Parameterized With 4 Values Constructor: "<<cal3.sub();
    cout<<"\n\nMultiply Using Parameterized With 4 Values Constructor: "<<cal3.mul();
    cout<<"\n\nDivide Using Parameterized With 4 Values Constructor: "<<cal3.divide(); 
}

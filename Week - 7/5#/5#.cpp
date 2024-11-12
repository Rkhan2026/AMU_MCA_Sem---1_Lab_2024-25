#include <iostream>
using namespace std;

class greatestFinder
{
	
private:
    int num1;
    int num2;

public:
    void set_data(int num1, int num2)
    {
        this->num1 = num1;
        this->num2 = num2;
    }

    int checkGreatest()
    {
         if (this->num1 > this->num2)
		 {
         	return this->num1;
		 } 
		 else if (this->num1 < this->num2)
		 {
		 	return this->num2;
		 }
    }
    
};

int main()
{
    greatestFinder gf;
    
    int a,b;
    
	cout<<"Enter First Number : ";
    cin>>a;
    
	cout<<"Enter Second Number : ";
    cin>>b;
    
    if (a!=b) {
    	gf.set_data(a,b);
    
    	int greater_no = gf.checkGreatest();
    
    	cout << "\nGreatest Of Two Given Numbers Is : " << greater_no << endl;

	}
    else if (a==b) {
    	cout<<"\nBoth Numbers Are Same So No Greatest Between Them";
	}
	
    return 0;
}

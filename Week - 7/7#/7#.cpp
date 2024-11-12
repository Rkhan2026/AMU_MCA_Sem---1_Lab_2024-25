#include<iostream>

using namespace std;

class pntr_ref
{
    
	private:
        int val;
    
	public:
        void set_data(int val){
            this->val=val;
        };

        int get_data(){          
			return this->val;
        }
        
};

int main(){

    int a;
    cout<<"Enter An Integer Which Will Be Assigned Using 'this' pointer: ";
    cin>>a;

    pntr_ref obj1;
    
    obj1.set_data(a);
	
	int n = obj1.get_data();
	
	cout<<"\nReturning The Pointer Reference, We get : "<<n;
    
    return 0;
}

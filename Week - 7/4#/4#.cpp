#include <iostream>


using namespace std;

class pntr_obj {
	
private:
    int roll_no;
    string name;

public:
    void set_data(string name, int roll_no) {
        this->name = name;
        this->roll_no = roll_no;
    }

    void print() {
        cout << "\nObject With Name : " << this->name << " And Roll Number : " << this->roll_no << 
        " Has Invoked The print() Function Using 'this' Pointer.\n" << endl;
    }
    
};

int main() {
    cout << "Program to create three objects for a class named pntr_obj with data members" << endl
         << "such as roll_no & name. Create a member function set_data() for setting the" << endl
         << "data values and print() member function to print which object has invoked it" << endl
         << "using the this pointer." << endl;
    cout << "-------------------------------------------------------------------------" << endl;

    pntr_obj object1, object2, object3;
    
    int roll_no_1, roll_no_2, roll_no_3;
    
    string name_1,name_2,name_3;
    
    cout<<endl<<"Enter Roll Number Of First Student : ";
	cin>>roll_no_1;
	cin.ignore();
    cout<<"Enter Name Of First Student : ";
	getline(cin, name_1);
    
    cout<<endl<<"Enter Roll Number Of Second Student : ";
	cin>>roll_no_2;
	cin.ignore();
    cout<<"Enter Name Of Second Student : ";
	getline(cin, name_2);
	
	
	cout<<endl<<"Enter Roll Number Of Third Student : ";
	cin>>roll_no_3;
	cin.ignore();
    cout<<"Enter Name Of Third Student : ";
	getline(cin, name_3);
	
	
    object1.set_data(name_1,roll_no_1);
    object2.set_data(name_2,roll_no_2);
    object3.set_data(name_3,roll_no_3);

    object1.print();
    object2.print();
    object3.print();

    return 0;
}

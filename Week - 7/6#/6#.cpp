#include<iostream>


using namespace std;

class flight
{
private:
    int flight_no;
    string source;
    string destination;
    float fare;
    
public:
    void set_data(int flight_no,string source,string destination,float fare)
	{
        this->flight_no = flight_no;
        this->source = source;
        this->destination = destination;
        this->fare = fare;
    };
    
	void print(){
        cout<<"\nDisplaying Vistara Flight Details :- "<<endl<<endl;
        
		cout<<"Flight Number : "<<this->flight_no<<endl;
        cout<<"Flight Source Destination : "<<this->source<<endl;
        cout<<"Flight Final Destination : "<<this->destination<<endl;
        cout<<"Flight Fare : "<<this->fare<<endl;
    };
};


int main(){
    flight vistara;

	int v1; string v2; string v3; float v4;
	
	cout<<"Enter Vistara Flight Details :- \n";
    
	cout<<"\nEnter Flight Number : ";
    
    cin>>v1; cin.ignore();
    
	cout<<"Enter Source Destination Of Flight : ";
    
    getline(cin,v2); 
	
	cout<<"Enter Final Destination Of Flight : ";
    
    getline(cin,v3); 
	
	cout<<"Enter Flight Fare : ";
    
    cin>>v4; cin.ignore();
	
	vistara.set_data(v1,v2,v3,v4);
    
    vistara.print();

    return 0;
}

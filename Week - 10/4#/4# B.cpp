#include <iostream> 

using namespace std; 

// union only stores max value variable type so only zip value will be saved at last
//and since we need to print the address, we can just print the value just after entering it and before entering next value

union AddressUnion { 
    
        char name[50]; 
        char home_address[100]; 
        char hostel_address[100]; 
        char city[50]; 
        char state[50]; 
        char zip[10];  
 
}; 
 
int main() { 

    AddressUnion myA; 
 
    cout << "Enter Name: "; 
    cin.getline(myA.name, 50); 
    cout << "\nName: " << myA.name; 
    
	cout << "\n\nEnter Home Address: "; 
    cin.getline(myA.home_address, 100); 
    cout << "\nHome Address: " << myA.home_address; 
    
	cout << "\n\nEnter Hostel Address: "; 
    cin.getline(myA.hostel_address, 100); 
    cout << "\nHostel Address: " <<myA.hostel_address; 
    
	cout << "\n\nEnter City: "; 
    cin.getline(myA.city, 50); 
    cout << "\nCity: "<<myA.city; 
    
	cout << "\n\nEnter State: "; 
    cin.getline(myA.state, 50); 
    cout << "\nState: " <<myA.state; 
    
	cout << "\n\nEnter ZIP: "; 
    cin.getline(myA.zip, 10); 
 
	cout << "\nZIP: "<<myA.zip; 
	
	return 0; 
	
} 

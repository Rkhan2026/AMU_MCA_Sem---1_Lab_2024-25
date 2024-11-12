#include <iostream> 

using namespace std; 

//we create struct inside union otherwise union only stores max value variable type so only zip value will be saved at last
//and since we need to print the address in one go, we create struct to do so. otherwise we can just print the value just after entering it
//and before entering next value

union AddressUnion { 
    struct { 
        char name[50]; 
        char home_address[100]; 
        char hostel_address[100]; 
        char city[50]; 
        char state[50]; 
        char zip[10]; 
    } com; 
 
}; 
 
int main() { 

    AddressUnion myA; 
 
    cout << "Enter Name: "; 
    cin.getline(myA.com.name, 50); 
    cout << "Enter Home Address: "; 
    cin.getline(myA.com.home_address, 100); 
    cout << "Enter Hostel Address: "; 
    cin.getline(myA.com.hostel_address, 100); 
    cout << "Enter City: "; 
    cin.getline(myA.com.city, 50); 
    cout << "Enter State: "; 
    cin.getline(myA.com.state, 50); 
    cout << "Enter ZIP: "; 
    cin.getline(myA.com.zip, 10); 
 
	cout << "Full Address: " << myA.com.name << ", "<<myA.com.home_address<<", "<<myA.com.hostel_address;
	cout<<", "<<myA.com.city<<", "<<myA.com.state<<", "<<myA.com.zip; 
	
	return 0; 
	
} 

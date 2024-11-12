#include <iostream> 

using namespace std; 
 
int main() { 

	string name, branch; int year;

    cout << "Enter Your Name : "; 
    
    getline(cin, name); 
 
    cout << "\nEnter Your Branch: "; 
    
    getline(cin, branch); 
 
    cout << "\nEnter Your Year: "; 
     
    cin >> year; 
 
    cout << "\n\nInformation Without Using Classes And Objects --> \n"; 
    cout << "\nName: " << name << endl; 
    cout << "\nBranch: " << branch << endl; 
    cout << "\nYear: " << year << endl; 
 
    return 0; 
    
} 

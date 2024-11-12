#include <iostream> 
using namespace std; 
 
class ObjectCounter { 
//  Static Members-->
//  	Static members are shared by all instances of a class hence this means that no matter how many Counter objects are created, 
//		they all refer to the same objectCount variable.
//		It exists even when no objects of the class are currently in existence. 
//		This is crucial for tracking the total object count throughout the program's execution.
private: 
    static int objectCreateCount;  
    static int objectDestroyCount;  
    int objectId;             
 
public: 
	ObjectCounter() {    
		objectCreateCount++; 
        objectId = objectCreateCount;       
        cout << "\nObject " << objectId << " Created." << endl; 
    } 
 
    ~ObjectCounter() {     
        cout << "\nObject " << objectId << " Destroyed." << endl; 
        objectDestroyCount++;         
    } 
 
    static int getObjectCreateCount() {   
     	return objectCreateCount;    
    } 
    
    static int getObjectDestroyCount() {    
        return objectDestroyCount;        
    } 
}; 
 
//	Why Outside the Class Definition?
//	Initialization-->
//		Static member variables must be defined and initialized outside the class definition. 
//		This is a C++ language requirement. 

int ObjectCounter::objectCreateCount = 0; 
int ObjectCounter::objectDestroyCount = 0; 
 
int main() { 
	// Destructor is automatically called when an object goes out of scope. 
	// In destructor, objects are destroyed in the reverse of an object creation.
	{	
		ObjectCounter obj1;  // Object created within the first block  
		{ 
       	 	ObjectCounter obj2;   // Object created within the second block
        	ObjectCounter obj3;  // Object created within the second block
    	} // Objects 2 and 3 destroyed   	
	} 	// Object 1 destroyed
    
	cout << "\nTotal Objects Created So Far: " << ObjectCounter::getObjectCreateCount() << endl; 
    cout << "\nTotal Objects Destroyed So Far: " << ObjectCounter::getObjectDestroyCount() << endl;    
	return 0; 
}

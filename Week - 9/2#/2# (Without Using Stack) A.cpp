#include <iostream>

using namespace std;

void tower_Of_Hanoi_NonRecursive(int n, string source, string auxiliary, string destination)
{
  
  if (n==0) {
  	 
	   cout << "\nThe Number of Disks Cannot Be Zero";
	   
  }
  
   else if (n == 1)
  {
  	
    cout << "\nMove Disk " << n << " From " << source << " To " << destination << endl;
    
  }
  
  else if (n>1)
  
   {
   	
   	   //After observing below iterations, we can think that after a disk other than the smallest disk is moved, 
	   //the next disk to be moved must be the smallest disk because it is the top disk resting on the spare pole and 
	   //there are no other choices to move a disk.
  
   		// Calculate total moves using 2^disks - 1 as we are using bitwise left shift which means a<<b = a*2^b where b is number of disks 
        int totalMoves = (1 << n) - 1; 
		
		
		//if number of disks are even then auxiliary and destination are swapped becuase 
		//When the number of disks is odd, the bottom disk will end up on the destination peg.
		//When the number of disks is even, the bottom disk will end up on the auxiliary peg.
		//By swapping the auxiliary and destination pegs when the number of disks is even, we effectively swap the roles of these pegs for 
		//the bottom disk. This ensures that the bottom disk is moved to the correct peg.
		
		//if number of disks are even and when it is even the first move needs to be source to auxiliary
		if (n%2 == 0) {
					
			for (int i=1; i<=totalMoves; i++) { //total number of moves start from 1 to 2^n - 1 in for loop for solving problem
			
				//i % 3 == 1 in case of for e.g 4 disk, then the source to auxiliary move or vice versa repeats itself at every 3rd move
				//i.e 1st move --> 4th move --> etc and also 4 % 3 = 1 and 7 % 3 = 1 etc.
			
				if (i%3==1){ 	//1. move S disk to A or vice versa depending upon bigger of the two //bigger of the two means the disk of bigger size
					cout << "\n "<<i<< ". Move Disk " << " Between " << source << " And " << auxiliary << endl;
				}
				
				//i % 3 == 2 in case of for e.g 4 disk, then the source to destination move or vice versa repeats itself at every 3rd move
				//i.e 2nd move --> 5th move --> etc and also 2 % 3 = 2 and 5 % 3 = 2 etc.
			
				else if (i%3==2) { //2. move S disk to D or vice versa depending upon bigger of the two //bigger of the two means the disk of bigger size
					cout << "\n "<<i<<". Move Disk " << " Between " << source << " And " << destination << endl;				
				}
				
				//i % 3 == 0 in case of for e.g 4 disk, then the auxiliary to destination move or vice versa repeats itself at every 3rd move
				//i.e 3rd move --> 6th move --> etc and also 3 % 3 = 0 and 6 % 3 = 0 etc.
				
				else if (i%3==0) { 	//	3. move A disk to D or vice versa depending upon bigger of the two //bigger of the two means the disk of bigger size
					cout << "\n "<<i<<". Move Disk " << " Between " << auxiliary << " And " << destination << endl;
				}
					
			}			
		}
				
		//if number of disks are odd and when it is odd the first move needs to be source to destination
		else if (n%2!=0) {
			
			for (int i=1; i<=totalMoves; i++) { //total number of moves start from 1 to 2^n - 1 in for loop for solving problem
				
				//i % 3 ==1 in case of for e.g 3 disk, then the source to destination move or vice versa repeats itself at every 3rd move
				//i.e 1st move --> 4th move --> finally 7th move and also 4 % 3 = 1 and 7 % 3 = 1
		
				if (i%3==1){ //1. move S disk to D or vice versa depending upon bigger of the two (i%3==1) //bigger of the two means the disk of bigger size
					cout << "\n "<<i<< ". Move Disk " << " Between " << source << " And " << destination << endl;
				}						
				
				//i % 3 == 2 in case of for e.g 3 disk, then the source to auxiliary move or vice versa repeats itself at every 3rd move
				//i.e 2nd move --> 5th move and also 2 % 3 = 2 and 5 % 3 = 2
			
				else if (i%3==2) { //2. move S disk to A or vice versa depending upon bigger of the two (i%3==2) //bigger of the two means the disk of bigger size
					cout << "\n "<<i<< ". Move Disk " << " Between " << source << " And " << auxiliary << endl;
				}				
				
				//i % 3 == 0 in case of for e.g 3 disk, then the destination to auxiliary move or vice versa repeats itself at every 3rd move
				//i.e 3rd move --> 6th move and also 3 % 3 = 0 and 6 % 3 = 0
					
				else if (i%3==0) { 	//3. move D disk to A or vice versa depending upon bigger of the two (i%3==0) //bigger of the two means the disk of bigger size	 		
					cout << "\n "<<i<< ". Move Disk " << " Between " << destination << " And " << auxiliary << endl;			
				}	
							
			}
		}
		
	}	

}

//https://www.youtube.com/watch?v=q6RicK1FCUs sent by faraz masood sir for recursive method of tower of hanoi

void tower_Of_Hanoi_Recursive(int n, string source, string auxiliary, string destination)
{
  
  if (n==0) {
  	 cout << "\nThe Number of Disks Cannot Be Zero";
  }
  
   else if (n == 1)
  {
  	
    cout << "\nMove Disk " << n << " From " << source << " To " << destination << endl;
    
  }
  
  else if (n>1)
  {
    //in case of even number of disks such as 2, the moves are as follows -->
	// 1. move a disc from Source to auxiliary using destination
	// 2. move a disc from source to destination
	// 3. move a disc from auxiliary to destination using source
	
	//in case of odd number of disks such as 3, the moves are as follows -->
	// 1. move 2 disc from Source to auxiliary using destination
	// 2. move a disc from source to destination
	// 3. move 2 disc from auxiliary to destination using source
	
	//hence for n disks, the moves are as follows -->
	//1. move n-1 disks from source to auxiliary using destination
	//2. move a disk from source to destination
	//3. move n-1 disks from auxiliary to destination using source
	
	// for 3 disks, 1 is source, 2 is auxiliary and 3 is destination
	//								      toh(3,1,2,3)
	//								 /         |         \
	//					  toh(2,1,3,2)	      1-3	      toh(2,2,1,3)
	//					/	     |    \					  /       |    \
	//			toh(1,1,2,3)   1-2   toh(1,3,1,2)   toh(1,2,3,1) 2-3   toh(1,1,2,3)
	//				|						|			|					|
	//             1-3					  3-2          2-1				   1-3
		 
	tower_Of_Hanoi_Recursive(n - 1, source, destination, auxiliary);
    cout << "\nMove Disk " << n << " From " << source << " To " << destination << endl;
    tower_Of_Hanoi_Recursive(n - 1, auxiliary, source, destination);
    
  }
  
}

int main()
{
  int choice; int n;
  
  cout << "Tower of Hanoi Problem Using Both Recursive And Non Recursive Functions -->\n" << endl
       << "Enter 1 for Recursive And 2 For Non-Recursive Approach : ";
 
  cin >> choice;
 
  switch(choice) {
  	
	  case 1: cout << "\nRecursive Approach --> " << endl;
	  
	   		  cout << "\nEnter Number Of Disks : ";
  			  
			  cin >> n;
    		
			  tower_Of_Hanoi_Recursive(n, "Source Rod", "Auxiliary Rod", "Destination Rod"); break; // source, auxiliary and destination rods respectively
  
  	  case 2: cout << "\nNon-Recursive Approach : " << endl;
  	  		  
			  cout << "\nEnter Number Of Disks : ";
  			  
			  cin >> n;
    		
			  tower_Of_Hanoi_NonRecursive(n, "Source Rod", "Auxiliary Rod",  "Destination Rod"); break;  
  
  	  default: cout << "Invalid Choice!" << endl; break;
  
  }

  return 0;
}

#include <iostream>
#include <vector>
#include <stack>
#include <cmath>

using namespace std;

char rod[] = {'A', 'B', 'C'};
vector<stack<int> > stacks(3);

void moveDisk(int a, int b)
{
  if (stacks[b].empty() || (!stacks[a].empty() && stacks[a].top() < stacks[b].top()))
  {
    cout << "\nMove Disk " << stacks[a].top() << " From " << rod[a] << " To " << rod[b] << "\n";
    stacks[b].push(stacks[a].top());
    stacks[a].pop();
  }
  else
    moveDisk(b, a);
}

void towerOfHanoiNonRecursive(int n)
{
  int source = 0, aux = 1, destn = 2;
  int totalMoves = pow(2, n) - 1;

  if (n % 2 == 0)
    swap(aux, destn);

  for (int i = n; i >= 1; i--)
  {
    stacks[source].push(i);
  }

  for (int i = 1; i <= totalMoves; i++)
  {
    if (i % 3 == 1)
    {
      moveDisk(source, destn);
    }
    else if (i % 3 == 2)
    {
      moveDisk(source, aux);
    }
    else
    {
      moveDisk(aux, destn);
    }
  }
}

void towerOfHanoiRecursive(int n, string src, string helper, string dest)
{
  if (n == 1)
  {
    cout << "\nMove Disk " << n << " From " << src << " To " << dest << endl;
  }
  else
  {
    towerOfHanoiRecursive(n - 1, src, dest, helper);
    cout << "\nMove Disk " << n << " From " << src << " To " << dest << endl;
    towerOfHanoiRecursive(n - 1, helper, src, dest);
  }
}

int main()
{
  int choice;
  
  cout << "Tower of Hanoi Problem -->\n" << endl
       << "Enter 1 for Recursive And 2 For Non-Recursive Approach : ";
  cin >> choice;

  int n;
 
  switch(choice) {
  	
	  case 1: cout << "\nRecursive Approach --> " << endl;
	  
	   		  cout << "\nEnter Number Of Disks : ";
  			  
			  cin >> n;
    		
			  towerOfHanoiRecursive(n, "A", "B", "C"); break;
  
  	  case 2: cout << "\nNon-Recursive Approach : " << endl;
  	  		  
			  cout << "\nEnter Number Of Disks : ";
  			  
			  cin >> n;
    		
			  towerOfHanoiNonRecursive(n); break;
  
  	  default: cout << "Invalid Choice!" << endl; break;
  
  }
  
  return 0;
}

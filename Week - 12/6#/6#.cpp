#include <iostream>
using namespace std;

// Definition of a Node in a singly linked list
struct Node {
	// Data part of the node
    int data;   
	// Pointer to the next node in the list
	Node* next;
 	// Constructor to initialize the node with data     
	 Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

//Converting array to linked list
Node* convertarr2LL(int arr[],int n){   
	Node* head= new Node(arr[0]); //creating head 
    
	Node* mover=head; //pointer pointing towards head
    
	for (int i=1;i<n;i++){
        Node* temp=new Node(arr[i]); //creating new node every time
        mover->next=temp; //pointing mover to temp
        mover=mover->next; //moving mover to the next node
    }    
	return head;
}

// Function to insert a new node at the beginning of the linked list
Node* insertAtFront(Node* head, int new_data)
{
    // Create a new node with the given data
    Node* new_node = new Node(new_data);
    // Make the next of the new node point to the current head
    new_node->next = head;
    // Return the new node as the new head of the list
    return new_node;
}

// Function to insert a new node at the end and returns the head.
Node* insertAtEnd(Node* head, int new_data)
{
    // Create a new node
    Node* new_node = new Node(new_data);
    // If the Linked List is empty, make
    // the new node as the head and return
    if (head == NULL) {
        return new_node;
    }
    // Store the head reference in a temporary variable
    Node* last = head;
    // Traverse till the last node
    while (last->next != NULL) {
        last = last->next;
    }
    // Change the next pointer of the last node
    // to point to the new node
    last->next = new_node;
    // Return the head of the list
    return head;
}

// Function to insert a node at a specific position in the linked list.
Node* insertAtPosition(Node* head, int position, int data)
{
    Node* newNode = new Node(data);
    // If inserting at the beginning
    if (position == 0) {
        newNode->next = head;
        head = newNode;
        return head;
    }

    Node* current = head;
    // Traverse the list to find the node before the
    // insertion point
    for (int i = 1; i < position && current != NULL;++i) {
        current = current->next;
    }
    // If the position is out of bounds
    if (current == NULL) {
        cout << "Position Is Out Of Bounds" << endl;
        delete newNode; // Deallocate memory to prevent
                        // memory leak
        return head;
    }
    // Insert the new node at the specified position
    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// Function to delete the head node
Node* deleteHead(Node* head)
{
    // Base case if linked list is empty
    if (head == NULL)
        return NULL;
    // Change the head pointer to the next node
    // and free the original head 
    Node* temp = head;
    head = head->next;
    delete temp;
    // Return the new head
    return head;
}

// Function to remove the last node of the linked list
Node* removeLastNode(struct Node* head)
{
    // If the list is empty, return nullptr
    if (head == NULL) {
        return NULL;
    }
    // If the list has only one node, delete it and return
    // nullptr
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    // Find the second last node
    Node* second_last = head;
    while (second_last->next->next != NULL) {
        second_last = second_last->next;
    }
    // Delete the last node
    delete (second_last->next);
    // Change next of second last
    second_last->next = NULL;
    return head;
}

// Function to delete the node at a specific position
Node* deleteAtPosition(Node* head, int position)
{
    // If the list is empty
    if (head == NULL) {
        return head;
    }
    // If the head needs to be deleted
    if (position == 0) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    // Traverse to the node before the position to be
    // deleted
    Node* current = head;
    for (int i = 1; i < position && current != NULL; i++) {
        current = current->next;
    }
    // If the position is out of range
    if (current == NULL || current->next == NULL) {
        cout << "Position Is Out Of Bounds." << endl;
    }
    // Store the node to be deleted
    Node* temp = current->next;
    // Update the links to bypass the node to be deleted
    current->next = current->next->next;
    // Delete the node
    delete temp; 
    return head;
}


//Function to print the linked list elements
void printList(Node* head)
{
    // Start from the head of the list
    Node* curr = head;
    // Traverse the list
    while (curr != NULL) {
        // Print the current node's data
        cout << " " << curr->data<< " -> ";;
        // Move to the next node
        curr = curr->next;
    }
    // Print a newline at the end
    cout << "nullptr" << endl;
}

int main(){
	
	int n; 	char option;
	
	// Creating The Initial Linked List   
	cout<<"Enter The Number Of Elements In Linked List : ";
	cin>>n;
	
	int arr[n];
	
	for(int i=0; i<n; i++) {
			cout<<"\nEnter The Element At Index "<<i<<" : ";
			cin>> arr[i];
	}
	
	Node* head = convertarr2LL(arr,n);   
    // Print The Initial Linked List
    cout << "\n\nOriginal Linked List:";
    printList(head);
		
	cout<<"\n\nSingly Linked List Basic Operations -->";
	
	cout<<"\n\nInsertion Operations -->";
	
	cout<<"\na. Insertion At The Beginning";
	cout<<"\nb. Insertion At The End";
	cout<<"\nc. Insertion At A Given Position";
	
	cout<<"\n\nDeletion Operations -->";
	
	cout<<"\nd. Deletion At The Beginning";
	cout<<"\ne. Deletion At The End";
	cout<<"\nf. Deletion At A given Position";
	
	cout<<"\n\nEnter P To Print Linked List";
	
	cout<<"\n\nEnter O TO End The Program";
	
	operations: 
	do { 
	cout<<"\n\nChoose Operation : ";
	cin>>option;
		
	switch(option) {
			
		case 'P': 	
				printList(head);
				break;
		
		case 'O': 	
				cout << "\nExiting Program"; 
    			return 0; 
				break;
		
		case 'a' : {
			int data_1;			
			cout <<"\n\nEnter Node To Insert At The Beginning : ";		
    		cin>>data_1;
    
			head = insertAtFront(head, data_1);
			break;
		}	
					
		case 'b' : {
			int data_2;	
    		cout << "\n\nEnter Node To Insert At The End : ";
    		cin>>data_2;
    
			head = insertAtEnd(head, data_2);		
			break;
		}	
		
		case 'c' : {			
			int data_3; int pos; 			
			cout << "\n\nEnter Node To Insert At A Given Position : ";	
			cin>>data_3;
			
			cout<<"Enter Given Position : ";			
			cin>>pos;
			
			head = insertAtPosition(head, pos, data_3);			
			break;
		} 	
		
		case 'd': {			
			cout << "\n\nDeleting Node At The Beginning : ";
    		head = deleteHead(head);
    		break;		
		}
		
		case 'e': 	{			
    		cout << "\n\nDeleting Node At The End : ";
    		head = removeLastNode(head);
			break;
		}
		
		case 'f': 	{			
			int position;  		
			cout << "\n\nDeleting Node At A Given Position : ";
			
			cout<<"Enter Given Position : ";			
			cin>>position;
    		
			head = deleteAtPosition(head, position);
			break;
		}
		
		default: {
			cout<<"Enter Valid Choice";
			break;
		}				
	}		
	} 	while (n != 0);  goto operations; 	
}

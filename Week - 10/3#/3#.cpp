#include <iostream>
using namespace std;

struct Book
{
    int id;
    string title;
    string author;
    float price;
};

void printValues(Book b)
{
    cout << "ID: " << b.id << endl;
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Price: " << b.price << endl;
}

int main()
{
    Book b1;
    cout << "Enter Book Details --> \n" << endl;

    cout << "Book ID: ";
    cin >> b1.id;

    cin.ignore(); //clears the newline character from the buffer that has been put by the above int cin.

    cout << "Title : ";
    getline(cin, b1.title);

    cout << "Author : ";
    getline(cin, b1.author);

    cout << "Price : ";
    cin >> b1.price;

    cout << "\n\nDetails Of Entered Book Details :- " << endl;
    
	printValues(b1);

    return 0;
}

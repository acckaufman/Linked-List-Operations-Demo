//This program demonstrates use of a Linked List template class.
#include "LinkedList.h"
#include <iostream>
using namespace std;

int main()
{
	//#######################################################################################################
	//Part 1: Integers																						#
	//#######################################################################################################

	cout << "Creating the first instance of the LinkedList class, using the int data type." << endl;
	LinkedList<int> list1;
	cout << "Done." << endl << endl;

	//Demonstrate the appendItem() function
	cout << "Now appending the values 1, 3, 6, 10, 12, and 15 into the list." << endl;
	list1.appendItem(1);
	list1.appendItem(3);
	list1.appendItem(6);
	list1.appendItem(10);
	list1.appendItem(12);
	list1.appendItem(15);
	cout << "Done." << endl << endl;
	list1.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate insertItem() function
	cout << "Now inserting the value 7 into the list." << endl;
	list1.insertItem(7);
	cout << "Done." << endl << endl;
	list1.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function
	cout << "Now deleting the value 10 from the list." << endl;
	list1.deleteItem(10);
	cout << "Done." << endl << endl;
	list1.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function with a value at the end of the list
	cout << "Now deleting 15, the last item in the list." << endl;
	list1.deleteItem(15);
	cout << "Done." << endl << endl;
	list1.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function with the first value in the list
	cout << "Now deleting 1, the first item in the list." << endl;
	list1.deleteItem(1);
	cout << "Done." << endl << endl;
	list1.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the searchItem() function
	cout << "Now searching for the value 12 in the list." << endl;
	int temp;		//Holder variable for the index returned by the function
	temp = list1.searchItem(12);
	if (temp == -1)
		cout << "An error has occurred." << endl << endl;		//The function should find the value, so we do not expect this error to appear.
	else
		cout << "Done." << endl << endl << "The value 12 was found at index " << temp << " in the list." << endl << endl;

	system("pause");
	cout << endl;

	//Demonstrate the searchItem() function with an item that is not in the list.
	cout << "Now searching for the value 9, which we know is not in the list." << endl;
	temp = list1.searchItem(9);
	if (temp == -1)
		cout << "Done." << endl << endl << "The item you searched for was not found." << endl << endl;
	else
		cout << "Done." << endl << endl << "The value 9 was found at index " << temp << " in the list." << endl << endl;	//Not expected to appear

	system("pause");
	cout << endl;

	//#######################################################################################################
	//Part 2: Characters																					#
	//#######################################################################################################

	cout << "Creating the second instance of the LinkedList class, using the char data type." << endl;
	LinkedList<char> list2;
	cout << "Done." << endl << endl;

	//Demonstrate the appendItem() function
	cout << "Now appending the values 'g', 'o', 's', 't', and 'y' into the list." << endl;
	list2.appendItem('g');
	list2.appendItem('o');
	list2.appendItem('s');
	list2.appendItem('t');
	list2.appendItem('y');
	cout << "Done." << endl << endl;
	list2.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate insertItem() function
	cout << "Now inserting the value 'h' into the list." << endl;
	list2.insertItem('h');
	cout << "Done." << endl << endl;
	list2.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function with a value at the end of the list
	cout << "Now deleting 'y', the last item in the list." << endl;
	list2.deleteItem('y');
	cout << "Done." << endl << endl;
	list2.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function with a value at the beginning of the list
	cout << "Now deleting the value 'g' from the list." << endl;
	list2.deleteItem('g');
	cout << "Done." << endl << endl;
	list2.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the deleteItem() function with a value in the middle of the list
	cout << "Now deleting the value 's' from the list." << endl;
	list2.deleteItem('s');
	cout << "Done." << endl << endl;
	list2.displayList();
	cout << endl;

	system("pause");
	cout << endl;

	//Demonstrate the searchItem() function
	cout << "Now searching for the value 'o' in the list." << endl;
	//A temporary int variable for the index was already defined in part 1, so we will use that
	temp = list2.searchItem('o');
	if (temp == -1)
		cout << "An error has occurred." << endl << endl;		//The function should find the value, so we do not expect this error to appear.
	else
		cout << "Done." << endl << endl << "The value 'o' was found at index " << temp << " in the list." << endl << endl;

	system("pause");
	cout << endl;

	//Demonstrate the searchItem() function with an item that is not in the list.
	cout << "Now searching for the value 's', which we know is no longer in the list." << endl;
	temp = list2.searchItem('s');
	if (temp == -1)
		cout << "Done." << endl << endl << "The item you searched for was not found." << endl << endl;
	else
		cout << "Done." << endl << endl << "The value 's' was found at index " << temp << " in the list." << endl << endl;	//Not expected to appear

	system("pause");
	cout << endl;

	cout << "That's the end of the program!" << endl << endl;

	system("pause");
	return 0;
}
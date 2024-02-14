#include<iostream>
using namespace std;
#include "Queue.h"
#include "Node.h"
int main()
{
	Queue queue;
	unsigned int choice;
	char value1, choice1;
	cout << "1. Insert an Item in the queue" << endl;
	cout << "2. Delete an Item from the queue" << endl;
	cout << "3. Get the front Item of the queue" << endl;
	cout << "4. Check if the queue is empty" << endl;
	cout << "5. Exit" << endl;
	do {
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "\nEnter the character:";
			cin >> value1;
			queue.Enqueue(value1);
			break;
		case 2:
			queue.Dequeue();
			break;
		case 3:
			cout << queue.GetFront() << endl;
			break;
		case 4:
			if (queue.IsEmpty())
				cout << "Queue is Empty!!" << endl;
			else
				cout << "Queue is not Empty!!" << endl;
			break;
		case 5:
			exit(0);
			break;
		default:
			cout << "Sorry! Invalid Choice... Please Enter Again!!" << endl;
			break;
		}
		
			cout << "Do you again want to enter any choice?(Y\N): ";
			cin >> choice1;

	} while (choice1 != 'N' || choice1 != 'n');
	



}
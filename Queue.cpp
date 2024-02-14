#include "Queue.h"
#include<iostream>
using namespace std;

Queue::Queue()
{
	front = 0;
	rear = 0;
}
bool Queue::IsEmpty()
{
	if (front == 0)
		return true;
	else
		return false;
}
void Queue::Enqueue(char value)
{
	Node* temp;
	temp = new Node;
	temp->data = value;
	temp->next = 0;
	if (IsEmpty())
	{
		front = temp;
		rear = temp;
		cout << "Data is Enqueued Successfully!!" << endl;
	}
	else
	{
		rear->next = temp;
		rear = temp;
		cout << "Node is Enqueued Successfully!!" << endl;
	}
}
void Queue::Dequeue()
{
	Node* temp = front;
	if (IsEmpty())
		cout << "List is Empty!!" << endl;
	else
	{
		front = front->next;
		delete temp;
		cout<<"Node is Dequeued Successfully!!" << endl;
	}
}
char Queue::GetFront()
{
	if (IsEmpty())
		cout << "list is Empty!!" << endl;
	else
		return front->data;
}

Queue::~Queue()
{
	Node* temp = front;
	while (temp->next != 0)
	{
		front = temp->next;
		delete temp;
		temp = front;
		
	}
		
}

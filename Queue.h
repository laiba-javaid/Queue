#pragma once
#include "Node.h"
class Queue
{
	Node* front;
	Node* rear;
public:
	Queue();
	void Enqueue(char);
	void Dequeue();
	bool IsEmpty();
	char GetFront();
	~Queue();
};


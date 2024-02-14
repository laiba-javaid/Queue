# Queue Data Structure Documentation

## Introduction
This documentation provides a comprehensive overview of the Queue data structure implemented in C++ along with its associated methods and functionalities.

### Queue Overview
A queue is a linear data structure that follows the First In, First Out (FIFO) principle. In a queue, elements are inserted from one end (rear) and removed from the other end (front). It operates on the principle of 'first come, first served'. 

## Files
This Queue implementation consists of the following files:

1. **Node.h** - Header file defining the Node class.
2. **Node.cpp** - Source file defining the constructor for the Node class.
3. **Queue.h** - Header file defining the Queue class.
4. **Queue.cpp** - Source file defining the methods of the Queue class.
5. **Source.cpp** - Source file containing the main function demonstrating the usage of the Queue.

## Implementation Details

### Node Class
The `Node` class represents the individual elements of the queue.

#### Attributes
- `data`: Stores the character data of the node.
- `next`: Pointer to the next node in the queue.

#### Methods
- `Node()`: Constructor to initialize a node.

### Queue Class
The `Queue` class represents the queue data structure.

#### Attributes
- `front`: Pointer to the front (head) of the queue.
- `rear`: Pointer to the rear (tail) of the queue.

#### Methods
- `Queue()`: Constructor to initialize an empty queue.
- `IsEmpty()`: Checks if the queue is empty.
- `Enqueue(char value)`: Inserts an element into the queue.
- `Dequeue()`: Removes an element from the front of the queue.
- `GetFront()`: Returns the element at the front of the queue.
- `~Queue()`: Destructor to deallocate memory occupied by the queue.

### Main Function
The `main` function in `Source.cpp` demonstrates the usage of the Queue data structure. It provides a menu-driven interface allowing the user to perform various operations on the queue such as insertion, deletion, checking if the queue is empty, and retrieving the front element.

## Compilation Instructions
To compile and run the program:
```
g++ Source.cpp Queue.cpp Node.cpp -o queue_program
./queue_program
```

## Usage
Follow the on-screen instructions to interact with the queue.

## Conclusion
This documentation provides a detailed understanding of the Queue data structure implemented in C++. It illustrates how to create a queue, insert elements, delete elements, check if the queue is empty, and retrieve elements from the queue. Users can leverage this implementation for various applications requiring FIFO data processing.

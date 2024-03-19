/*
Exercise 2: Implementing Priority with Separate Priority Field
Modify the Node class to include a separate priority field, and adjust the enqueue function to 
insert based on this priority instead of the node's data value. This more accurately reflects real-world 
uses of priority queues where the data and its priority may differ.
*/

class Node {
public:
    int data;
    int priority; // New field for priority
    Node* next;

    Node(int data, int priority) : data(data), priority(priority), next(nullptr) {}
};

// Adjust enqueue to account for priority
void enqueue(int data, int priority) {
    Node* newNode = new Node(data, priority);
    // Insertion logic based on priority
}


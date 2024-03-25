#include <iostream>
#include "priority_queue.h"
using namespace std;

int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(5);
    pq.enqueue(30);
    pq.enqueue(-100);
    pq.enqueue(1);
    pq.enqueue(0);

    cout << "Front element (highest priority) is: " << pq.peekFront() << endl;
    cout << "Removed element from queue: " << pq.dequeue() << endl;
    cout << "New front element (next highest priority) is: " << pq.peekFront() << endl;

    // Add the test code for case 2 here.
    // You can add a header file for the priority queue for exercise 2 or not it don't matter

    return 0;
}
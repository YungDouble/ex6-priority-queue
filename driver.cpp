/*
* Author: Davos DeHoyos
 * Class: Data Structures
 * Assignment: Priority Queue (Exercise 6)
 * Description:
 *     This file tests the PriorityQueue class, which implements a priority
 *     queue where elements are prioritized by their data values. The program
 *     enqueues several elements, displays the queue, and demonstrates the
 *     functionality of peek and dequeue operations.
 *
 * Date: [11/05/2024]
 */

#include <iostream>
#include "priority_queue.h"

int main() {
    std::cout << "Testing PriorityQueu (without separate priority field):" << std::endl;

    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(5);
    pq.enqueue(30);
    pq.enqueue(-100);
    pq.enqueue(1);
    pq.enqueue(0);

    std::cout << "Queue contents: ";
    pq.displayQueue();
    std::cout << "Front element (highest priority) is: " << pq.peekFront() << std::endl;
    std::cout << "Removed element from queue: " << pq.dequeue() << std::endl;
    std::cout << "New front element (highest priority) is: " << pq.peekFront() << std::endl;

    return 0;
}
/*
* Author: Davos DeHoyos
 * Class: Data Structures
 * Assignment: Priority Queue (Exercise 6)
 * File: driver.cpp
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
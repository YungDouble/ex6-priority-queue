#include <iostream>
#include "priority_queue2.h"

void testPriorityQueue2() {
    PriorityQueue2 pq;

    std::cout << "\nRunning tests for PriorityQueue2 (with separate priority field):\n";

    // Enqueue elements with varying priorities
    pq.enqueue(30, 1);
    pq.enqueue(10, 2);
    pq.enqueue(20, 3);
    pq.enqueue(5, 4);
    pq.enqueue(30, 5);
    pq.enqueue(-100, 6);
    pq.enqueue(1, 7);
    pq.enqueue(0, 8);

    // Test displayQueue to check the ordering based on priority
    std::cout << "Queue contents after enqueues (expected order by priority):\n";
    pq.displayQueue();

    // Test peekFront to confirm the element with the highest priority is at the front
    int expectedFront = 0; // because 0 has the highest priority (priority = 8)
    if (pq.peekFront() == expectedFront) {
        std::cout << "PASS: peekFront after enqueues is " << expectedFront << std::endl;
    } else {
        std::cout << "FAIL: peekFront expected " << expectedFront << " but got " << pq.peekFront() << std::endl;
    }

    // Test dequeue to confirm elements are dequeued in order of priority
    if (pq.dequeue() == expectedFront) {
        std::cout << "PASS: dequeue removes " << expectedFront << " as the highest priority\n";
    } else {
        std::cout << "FAIL: dequeue expected " << expectedFront << " but got " << pq.dequeue() << std::endl;
    }

    // Check the new front after one dequeue
    expectedFront = 1; // 1 should now have the highest priority (priority = 7)
    if (pq.peekFront() == expectedFront) {
        std::cout << "PASS: New peekFront after dequeue is " << expectedFront << std::endl;
    } else {
        std::cout << "FAIL: New peekFront expected " << expectedFront << " but got " << pq.peekFront() << std::endl;
    }

    // Dequeue all elements to ensure the queue maintains proper order and empties correctly
    while (!pq.isEmpty()) {
        int removed = pq.dequeue();
        std::cout << "Dequeued element: " << removed << "\n";
    }

    // Test isEmpty on an empty queue
    if (pq.isEmpty()) {
        std::cout << "PASS: isEmpty returns true after all elements are dequeued\n";
    } else {
        std::cout << "FAIL: isEmpty expected true after all elements are dequeued but got false\n";
    }
}

int main() {
    testPriorityQueue2();
    return 0;
}

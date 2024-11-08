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
 * Date: 11/05/2024
 */

#include <iostream>
#include "priority_queue.h"

void testPriorityQueue() {
  PriorityQueue pq;

  std::cout << "\nRunning tests for PriorityQueue (without separate priority field):\n";

  // Tets enqueue and peekFront
  pq.enqueue(30);
  pq.enqueue(10);
  pq.enqueue(20);
  pq.enqueue(5);

  int expectedFront = 5;
  if (pq.peekFront() == expectedFront) {
    std::cout << "PASS: peekFront after enqueueing elements is " << expectedFront << std::endl;
  } else {
    std::cout << "FAIL: peekFront expected " << expectedFront << " but got " << pq.peekFront() << std::endl;
  }

  // Test dequeue
  if (pq.dequeue() == expectedFront) {
    std::cout << "PASS: dequeue removes " << expectedFront << " as the highest priority\n";
  } else {
    std::cout << "FAIL: dequeue expected " << expectedFront << " but got " << pq.dequeue() << std::endl;
  }

  // Test isEmpty
  PriorityQueue emptyQueue;
  if (emptyQueue.isEmpty()) {
    std::cout << "PASS: isEmpty returns true for a new queue\n";
  } else {
    std::cout << "FAIL: isEmpty expected true for a new queue but got false\n";
  }
}

int main() {
  testPriorityQueue();
  return 0;
}
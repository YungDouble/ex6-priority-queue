# Priority Queue Assignment - Data Structures

## Overview

This repository contains the solution for Assignment #6 in my Data Structures class, implemented in C++. The assignment focuses on the implementation of a **Priority Queue** with two main exercises:
1. Displaying elements in the queue without modifying it.
2. Adding a separate priority field to nodes and managing enqueue based on priority.

## Assignment Details

### Exercise 1: Implementing `displayQueue` Method

The `displayQueue` method traverses the priority queue and prints each element from front to back. This method provides a way to view all elements in the queue **without modifying** the queue structure. The purpose of this exercise is to gain experience with linked list traversal.

### Exercise 2: Implementing Priority with a Separate Priority Field

In this exercise, the `Node` class is modified to include a `priority` field. The `enqueue` function is then adjusted to insert nodes based on their priority rather than the data value. This more accurately reflects real-world uses of priority queues where data and priority are separate.

## Code Structure

- **PriorityQueue.h / PriorityQueue.cpp**: Defines the `PriorityQueue` class and methods, including `enqueue`, `displayQueue`, and other operations.
- **Node.h / Node.cpp**: Defines the `Node` class, which includes `data`, `priority`, and a pointer to the next node.

## Key Concepts and Operations

- **Priority Queue**: A data structure where each element has a priority, and elements are dequeued based on priority rather than insertion order.
- **Linked List**: Used to implement the priority queue, with each node containing data, priority, and a pointer to the next node.

### Methods

- `enqueue(data, priority)`: Adds a new node to the queue based on priority.
- `displayQueue()`: Prints all elements from front to back without modifying the queue.

## Usage

To run this code:
1. Clone the repository to your local machine.
2. Compile and run the `main.cpp` file to test the priority queue operations.

```bash
g++ -std=c++11 main.cpp PriorityQueue.cpp Node.cpp -o PriorityQueueApp
./PriorityQueueApp


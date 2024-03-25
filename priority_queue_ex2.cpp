#include "priority_queue2.h"
#include <iostream>

Node2::Node2(int dataVal, int priorityVal) : data(dataVal), priority(priorityVal), next(nullptr) {}

PriorityQueue2::PriorityQueue2() : front(nullptr) {}

PriorityQueue2::~PriorityQueue2() {
    while (front != nullptr) {
        Node2* temp = front;
        front = front->next;
        delete temp;
    }
}

void PriorityQueue2::enqueue(int data, int priority) {
    Node2* newNode = new Node2(data, priority);
    // Fill your code here
}


// Implementation for displayQueue() goes here.
    /*
    Exercise 1: Implementing the displayQueue Method
    Implement a method called displayQueue in the PriorityQueue class that prints all the elements
    in the queue from front to back, without modifying the queue. This will help you to understand
    how to traverse linked lists.
    */

void PriorityQueue2::displayQueue() const {
    Node2* temp = front;
    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}


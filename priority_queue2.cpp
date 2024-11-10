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

    // Insert newNode at the correct position based on priority
    if (front == nullptr || priority > front->priority) {
        newNode->next = front;
        front = newNode;
    } else {
        Node2* current = front;
        while (current->next != nullptr && current->next->priority >= priority) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

// Missing functions

int PriorityQueue2::dequeue() {
    if (isEmpty()) {
        std::cerr << "Queue is empty" << std::endl;
        return -1; // Return an error value if the queue is empty
    }
    Node2* temp = front;
    int data = front->data;
    front = front->next;
    delete temp;
    return data;
}

bool PriorityQueue2::isEmpty() const {
    return front == nullptr;
}

int PriorityQueue2::peekFront() const {
    if (isEmpty()) {
        std::cerr << "Queue is empty" << std::endl;
        return -1; // Return an error value if the queue is empty
    }
    return front->data;
}

void PriorityQueue2::displayQueue() const {
    Node2* temp = front;
    while (temp != nullptr) {
        std::cout << "Data: " << temp->data << ", Priority: " << temp->priority << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

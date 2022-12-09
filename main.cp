//
//  main.cpp
//  queue_functions
//
//  Created by Matt Zhang on 12/8/22.
//

// main.cpp

#include <iostream>
#include <queue>
#include "queue_functions.h"

void move_to_rear(std::queue<int>& q){
    if(q.empty()){
        return;
    }
    
    int value = front(q);
    
    pop(q);
    
    push(q, value);
}

void push(std::queue<int>& q, int value){
    q.push(value);
}

int front(std::queue<int>& q) {
    return q.front();
}

void pop(std::queue<int>& q) {
    q.pop();
}

int main() {
  // Create a queue of integers
  std::queue<int> q;

  // Push some values to the queue
  q.push(1);
  q.push(2);
  q.push(3);

  // Print the queue
  std::cout << "Original queue: ";
  while (!q.empty()) {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;

  // Push some values to the queue
  q.push(1);
  q.push(2);
  q.push(3);

  // Move the element at the front of the queue to the rear
  move_to_rear(q);

  // Print the queue
  std::cout << "Modified queue: ";
  while (!q.empty()) {
    std::cout << q.front() << " ";
    q.pop();
  }
  std::cout << std::endl;

  return 0;
}

//
//  queue_functions.h
//  queue_functions
//
//  Created by Matt Zhang on 12/8/22.
//

#ifndef QUEUE_FUNCTIONS_H
#define QUEUE_FUNCTIONS_H

#include <queue>

void move_to_rear(std::queue<int>& q);

void push(std::queue<int>& q, int value);

int front(std::queue<int>& q);

void pop(std::queue<int>& q);

#endif

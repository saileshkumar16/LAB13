# LAB13
## Date : 26-30 October 2023
## Aim : Stack Implementation
## Algorithm :
A stack is a data structure that follows the Last In, First Out (LIFO) principle, meaning that the last element added to the stack is the first one to be removed. Here are the fundamental stack operations:

## Push (Insertion):
## Algorithm:
1. Check if the stack is full (if it has reached its maximum capacity).
2. If the stack is full, display an overflow error.
3. If the stack is not full, increment the top pointer.
4. Add the new element to the location pointed to by the top.

## Pop (Deletion):
## Algorithm:

1. Check if the stack is empty (if the top pointer is -1).
2. If the stack is empty, display an underflow error.
3. If the stack is not empty, remove the element at the top and decrement the top pointer.

## Peek (Top element retrieval without removal):
## Algorithm:

1. Check if the stack is empty.
2. If the stack is empty, display an error.
3. If the stack is not empty, return the element at the top.

## isEmpty:
## Algorithm:
Return true if the top pointer is -1 (indicating an empty stack), otherwise return false.

## isFull:
## Algorithm:
Return true if the top pointer is equal to the maximum size minus 1 (indicating a full stack), otherwise return false.

## OUTPUT: 
![Screenshot (82)](https://github.com/saileshkumar16/LAB13/assets/144588637/63dd3f2a-e40d-41d2-8741-638fefffbdf9)

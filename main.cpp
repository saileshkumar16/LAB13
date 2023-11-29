#include <iostream>

using namespace std;

const int maxSize = 5; // Maximum size of the stack

// Function to push an element onto the stack
void push(int stack[], int &top, int element) {
    if (top == maxSize - 1) {
        cout << "Stack Overflow - Cannot push element " << element << endl;
    } else {
        top++;
        stack[top] = element;
        cout << "Pushed " << element << " onto the stack." << endl;
    }
}

// Function to pop an element from the stack
void pop(int stack[], int &top) {
    if (top == -1) {
        cout << "Stack Underflow - Cannot pop from an empty stack." << endl;
    } else {
        cout << "Popped " << stack[top] << " from the stack." << endl;
        top--;
    }
}

// Function to peek at the top element of the stack
int peek(const int stack[], int top) {
    if (top == -1) {
        cout << "Stack is empty." << endl;
        return -1; // Assuming -1 is an invalid value for the stack
    } else {
        cout << "Top element: " << stack[top] << endl;
        return stack[top];
    }
}

// Function to check if the stack is empty
bool isEmpty(int top) {
    return top == -1;
}

// Function to check if the stack is full
bool isFull(int top) {
    return top == maxSize - 1;
}

int main() {
    int stack[maxSize]; // Stack array
    int top = -1;       // Top pointer initialized to -1

    int choice, element;

    do {
        // Display menu
        cout << "\nStack Operations Menu:" << endl;
        cout << "1. Push\n2. Pop\n3. Peek\n4. Check if Empty\n5. Check if Full\n6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to push onto the stack: ";
                cin >> element;
                push(stack, top, element);
                break;

            case 2:
                pop(stack, top);
                break;

            case 3:
                peek(stack, top);
                break;

            case 4:
                cout << (isEmpty(top) ? "Stack is empty." : "Stack is not empty.") << endl;
                break;

            case 5:
                cout << (isFull(top) ? "Stack is full." : "Stack is not full.") << endl;
                break;

            case 6:
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }

    } while (choice != 6);

    return 0;
}

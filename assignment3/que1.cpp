#include <iostream>
using namespace std;
#define MAX 100 
class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }
        bool isFull() {
        return top == MAX - 1;
    }
    bool isEmpty() {
        return top == -1;
    }
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
        } else {
            arr[++top] = value;
            cout << value << " pushed to stack." << endl;
        }
    }
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Nothing to pop." << endl;
        } else {
            cout << arr[top--] << " popped from stack." << endl;
        }
    }
    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\n--- Stack Menu ---\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. isEmpty\n";
        cout << "5. isFull\n";
        cout << "6. Display\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to push: ";
            cin >> value;
            stack.push(value);
            break;
        case 2:
            stack.pop();
            break;
        case 3:
            stack.peek();
            break;
        case 4:
            cout << (stack.isEmpty() ? "Stack is empty." : "Stack is not empty.") << endl;
            break;
        case 5:
            cout << (stack.isFull() ? "Stack is full." : "Stack is not full.") << endl;
            break;
        case 6:
            stack.display();
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);

    return 0;
}

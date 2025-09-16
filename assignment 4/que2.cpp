#include <iostream>
#define SIZE 5
using namespace std;

class Circularqueue {
    int arr[SIZE];
    int front, rear;
public:
    Circularqueue() {
        front = rear = -1;
    }

    bool isEmpty() { return front == -1; }
    bool isFull() { return (rear + 1) % SIZE == front; }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue full\n";
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        cout << x << " inserted\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue empty\n";
            return;
        }
        cout << arr[front] << " removed\n";
        if (front == rear) front = rear = -1;
        else front = (front + 1) % SIZE;
    }

    void peek() {
        if (isEmpty()) cout << "Queue empty\n";
        else cout << "Front element = " << arr[front] << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue empty\n";
            return;
        }
        cout << "Queue: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    Circularqueue cq;
    int ch, val;
    do {
        cout << "\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit\nChoice: ";
        cin >> ch;
        switch (ch) {
            case 1: cout << "Enter value: "; cin >> val; cq.enqueue(val); break;
            case 2: cq.dequeue(); break;
            case 3: cq.peek(); break;
            case 4: cq.display(); break;
        }
    } while (ch != 5);
}

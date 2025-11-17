#include<iostream>
using namespace std;

class Queue {

    private:
        int front, rear, num_elements; // num_elements - number of elements in queue at the time
        int size;
        int *arr;

    public:
        Queue(int size): size(size), front(0), rear(-1), num_elements(0) {
            arr = new int[size];
        }

        inline bool isEmpty() {
            return (num_elements == 0);
        }

        inline bool isFull() {
            return (num_elements == size);
        }

        inline void enqueue(int item) {
            if(isFull()) {
                cout << "Queue is full!" << endl;
            }
            rear = (rear + 1) % size;
            arr[rear] = item;
            num_elements++;
            cout << "Item: " << item << " enqueued.\n";
        }

        inline int dequeue() {
            if (isEmpty()) {
                cout << "Queue is empty!";
                return -1;
            }
            int val = arr[front];
            front = (front + 1) % size;
            size--;
            return val;
        }

        inline int peek() {
            if (isEmpty()) {
                cout << "Queue is empty.\n";
                return -1;
            }
            return arr[front];
        }

        inline void display() {
            int count = num_elements;
            int i = front;

            while (count--) {
                cout << "Element: " << arr[i] << endl;
                i = (i + 1) % size;
            }
            cout << endl;
        }

};

int main() {
    Queue q(5);

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.dequeue();
    q.display();
    return 0;
}


// Queue Implementation

#include <iostream>
using namespace std;

class Queue
{
public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        this->front = -1;
        this->rear = -1;
    }

    ~Queue()
    {
        delete[] arr;
    }

    void enqueue(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full" << endl;
            return;
        }
        if (front == -1)
        {
            front = 0;
        }
        arr[++rear] = val;
    }

    int dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front++];
    }

    int getFront()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }

    int getRear()
    {
        if (rear == -1)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[rear];
    }

    bool isEmpty()
    {
        return front == -1 || front > rear;
    }
};

int main()
{
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);

    cout << "Front : " << queue.getFront() << endl;
    cout << "Dequeue : " << queue.dequeue() << endl;
    cout << "Dequeue : " << queue.dequeue() << endl;
    cout << "Front : " << queue.getFront() << endl;

    queue.enqueue(40);
    cout << "Rear : " << queue.getRear() << endl;
    cout << "Dequeue : " << queue.dequeue() << endl;
    cout << "Dequeue : " << queue.dequeue() << endl;

    cout << "Queue Empty : " << (queue.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> que;

    que.push(10);
    que.push(20);
    que.push(30);
    que.push(40);
    que.push(50);

    cout << "Front of the queue : " << que.front() << endl;
    cout << "Back of the queue : " << que.back() << endl;

    cout << "Dequeuing: " << que.front() << endl;
    que.pop();

    cout << "Front of the queue after dequeue : " << que.front() << endl;
    cout << "Back of the queue after dequeue : " << que.back() << endl;

    cout << "Size of the queue : " << que.size() << endl;

    if (que.empty())
    {
        cout << "The queue is empty." << endl;
    }
    else
    {
        cout << "The queue is not empty." << endl;
    }

    return 0;
}

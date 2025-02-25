// Stack Implementation

#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int index;
    int size;

    Stack(int n)
    {
        this->size = n;
        arr = new int[n];
        index = -1;
    }

    void push(int value)
    {
        if (index < this->size - 1)
        {
            arr[++index] = value;
        }
        else
        {
            cout << "ERROR: Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (index >= 0)
        {
            index--;
        }
        else
        {
            cout << "ERROR: Stack Underflow" << endl;
        }
    }

    void print()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        for (int i = 0; i <= this->index; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    int top()
    {
        if (index >= 0)
        {
            return arr[index];
        }
        else
        {
            cout << "ERROR: Stack Underflow" << endl;
        }
    }

    int length()
    {
        return index + 1;
    }

    bool isEmpty()
    {
        return index == -1;
    }
};

int main()
{
    Stack *stk = new Stack(3);
    stk->push(10);
    stk->push(20);
    stk->push(30);
    stk->push(40); // Should trigger "Stack Overflow" error

    cout << "Stack elements : ";
    stk->print();

    cout << "Top element : " << stk->top() << endl;

    stk->pop();
    cout << "After popping one element : ";
    stk->print();

    stk->pop();
    stk->pop();
    stk->pop(); // Should trigger "Stack Underflow" error

    cout << "Is stack empty? " << (stk->isEmpty() ? "Yes" : "No") << endl;

    return 0;
}

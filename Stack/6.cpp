#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int> &st, int element)
{
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int top = st.top();
    st.pop();
    insertAtBottom(st, element);
    st.push(top);
}

// Function to reverse a stack using recursion
void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;
    int top = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st, top);
}

// Function to insert an element into a sorted stack
void sortedInsert(stack<int> &st, int element)
{
    if (st.empty() || st.top() <= element)
    {
        st.push(element);
        return;
    }
    int top = st.top();
    st.pop();
    sortedInsert(st, element);
    st.push(top);
}

// Function to sort a stack
void sortStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int top = st.top();
    st.pop();
    sortStack(st);
    sortedInsert(st, top);
}

// Function to print the stack
void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    stack<int> st;
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(2);

    cout << "Original Stack : ";
    printStack(st);

    // Adding element to the bottom
    insertAtBottom(st, 5);
    cout << "After inserting 5 at bottom : ";
    printStack(st);

    // Reversing the stack
    reverseStack(st);
    cout << "Reversed Stack : ";
    printStack(st);

    // Sorting the stack
    sortStack(st);
    cout << "Sorted Stack : ";
    printStack(st);

    return 0;
}

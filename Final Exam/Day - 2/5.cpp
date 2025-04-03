// Reverse a Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        this->head = nullptr;
    }

    void insertAtTail(int data)
    {
        Node *newNode = new Node(data);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        Node *temp = head;

        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void reverseLinkedList()
    {
        Node *prev = nullptr;
        Node *current = head;
        while (current)
        {
            Node *next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void print()
    {
        Node *temp = head;

        while (temp)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
    }
};

int main()
{
    LinkedList *list = new LinkedList();

    cout << "Inserting at tail : 10, 20, 30, 40, 50" << endl;
    list->insertAtTail(10);
    list->insertAtTail(20);
    list->insertAtTail(30);
    list->insertAtTail(40);
    list->insertAtTail(50);

    cout << "Original Linked List : ";
    list->print();

    list->reverseLinkedList();
    cout << endl << "Reversed Linked List : ";
    list->print();

    return 0;
}

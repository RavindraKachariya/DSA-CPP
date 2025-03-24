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

    void insertAtHead(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void insertAtAnyPosition(int value, int position)
    {
        if (position <= 1)
        {
            this->insertAtHead(value);
            return;
        }

        int size = this->length();

        if (position > size)
        {
            this->insertAtTail(value);
            return;
        }

        Node *newNode = new Node(value);
        int i = 1;
        Node *temp = head;

        while (i < position - 1 && temp->next)
        {
            temp = temp->next;
            i++;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void removeAtAnyPosition(int position)
    {
        if (head == nullptr || position <= 0)
            return;
        if (position == 1)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *temp = head;
        int i = 1;
        while (i < position - 1 && temp->next)
        {
            temp = temp->next;
            i++;
        }
        if (temp->next == nullptr)
            return;
        Node *toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
    }

    void RemoveAtTail()
    {
        Node *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }
        temp->next = nullptr;
    }

    int length()
    {
        int count = 0;
        Node *temp = head;

        while (temp)
        {
            count++;
            temp = temp->next;
        }
        return count;
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

    // Insert at tail
    cout << "Inserting at tail : 10, 20" << endl;
    list->insertAtTail(10);
    list->insertAtTail(20);
    list->print();

    // Insert at head
    cout << "Inserting at head : 1, 2" << endl;
    list->insertAtHead(1);
    list->insertAtHead(2);
    list->print();

    // Insert at any position
    cout << "Inserting 30 at position 2" << endl;
    list->insertAtAnyPosition(30, 2);
    list->print();

    cout << "Removing at position 2" << endl;
    list->removeAtAnyPosition(2);
    list->print();

    // Remove at tail
    cout << "Removing at tail" << endl;
    list->RemoveAtTail();
    list->print();

    // Print length
    cout << "Current Length : " << list->length() << endl;

    return 0;
}
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *CreateTree()
{
    cout << "Enter Value Of Node (-1 for NULL): " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);

    cout << "Enter Left Of Node : " << root->data << endl;
    root->left = CreateTree();

    cout << "Enter Right Of Node : " << root->data << endl;
    root->right = CreateTree();

    return root;
}

int main()
{
    Node *root = CreateTree();

    return 0;
}

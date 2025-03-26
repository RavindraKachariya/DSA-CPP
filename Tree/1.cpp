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

void Preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void Postorder(Node *root)
{
    if (root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = CreateTree();

    cout << "\nPreorder Traversal: ";
    Preorder(root);

    cout << "\nInorder Traversal: ";
    Inorder(root);

    cout << "\nPostorder Traversal: ";
    Postorder(root);

    return 0;
}

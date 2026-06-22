#include<bits/stdc++.h>
using namespace std;

// NODE
class Node
{
public:
    int data;
    Node *parent = NULL, *left = NULL, *right = NULL;

    Node(int item)
    {
        data = item;
    }
};


// CREATE NODE
Node *create_node(int item)
{
    Node *new_node = new Node(item);

    if(new_node == NULL)
    {
        cout << "Error! Could not create new node.";
        exit(1);
    }

    return new_node;
}


// ADD LEFT CHILD
void add_left_child(Node *node, Node *child)
{
    node->left = child;
    if(child != NULL)
    {
        child->parent = node;
    }
}


// ADD RIGHT CHILD
void add_right_child(Node *node, Node *child)
{
    node->right = child;
    if(child != NULL)
    {
        child->parent = node;
    }
}


// INSERT NEW NODE TO BST
Node *bst_insert(Node *root, Node *node)
{
    Node *parent_node, *current_node;

    if(root == NULL)
    {
        root = node;
        return root;
    }


    parent_node = NULL;
    current_node = root;

    while(current_node != NULL)
    {
        parent_node = current_node;

        if(node->data < current_node->data)
        {
            current_node = current_node->left;
        }
        else
        {
            current_node = current_node->right;
        }
    }

    if(node->data < parent_node->data)
    {
        add_left_child(parent_node, node);
    }
    else
    {
        add_right_child(parent_node, node);
    }

    return root;
}


// BST CREATE
Node *create_bst()
{
    int arr[] = {5, 17, 3, 7, 12, 19, 1, 4};

    Node *root = create_node(10);

    for(int i=0; i<8; i++)
    {
        Node *node = create_node(arr[i]);

        root = bst_insert(root, node);
    }

    return root;
}


// BST TRABERSE, In-order traverse for printing ascending order
void traverse(Node *node)
{
    if(node->left != NULL)
    {
        traverse(node->left);
    }
    cout << node->data << " ";
    if(node->right != NULL)
    {
        traverse(node->right);
    }
}

int main()
{
    Node *root = create_bst();
    traverse(root);

    return 0;
}

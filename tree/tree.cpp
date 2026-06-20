#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    Node *left;
    int data;
    Node *right;
};

Node *create_node(int data)
{
    Node *new_node = new Node();

    if(new_node == NULL)
    {
        cout << "Memory Error!";
        exit(1);
    }

    new_node->left = NULL;
    new_node->data = data;
    new_node->right = NULL;

    return new_node;
}

void add_left_child(Node *node, Node *child)
{
    node->left = child;
}

void add_right_child(Node *node, Node *child)
{
    node->right = child;
}

Node *create_tree()
{
    Node *tow = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_child(tow, seven);
    add_right_child(tow, nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_child(seven, one);
    add_right_child(seven, six);

    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_child(six, five);
    add_right_child(six, ten);

    Node *eight = create_node(8);
    add_right_child(nine, eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_child(eight, three);
    add_right_child(eight, four);

    return tow;
}


// Tree traversing
void pre_order(Node *node)
{
    cout << node->data << " ";
    if(node->left != NULL)
    {
        pre_order(node->left);
    }
    if(node->right != NULL)
    {
        pre_order(node->right);
    }
}

void in_order(Node *node)
{
    if(node->left != NULL)
    {
        in_order(node->left);
    }
    cout << node->data << " ";
    if(node->right != NULL)
    {
        in_order(node->right);
    }
}

void post_order(Node *node)
{
    if(node->left != NULL)
    {
        post_order(node->left);
    }
    if(node->right != NULL)
    {
        post_order(node->right);
    }
    cout << node->data << " ";
}

int main()
{
    Node *root = create_tree();
    cout << "Root is : " <<  root->data;

    cout << "\n\nPre-order tree traversing.\n";
    pre_order(root);

    cout << "\n\nIn-order tree traversing.\n";
    in_order(root);

    cout << "\n\nPost-order tree traversing.\n";
    post_order(root);


    cout << "\n\n\n\n";
    return 0;
}

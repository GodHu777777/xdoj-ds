#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;

    Node(char t) : data(t), left(NULL), right(NULL) {};
};

void buildTree(Node*& root)
{
    char ch;
    cin >> ch;
    if(ch == '#')
    {
        root = NULL;
    }else 
    {
        root = new Node(ch);
        buildTree(root->left);
        buildTree(root->right);
    }
}

void inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node* root = NULL;
    buildTree(root);
    inOrder(root);
    return 0;
}
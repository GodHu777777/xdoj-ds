#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int t) : data(t), left(NULL), right(NULL) {};
};

void inOrder(Node* root)
{
    if(root == NULL) return;

    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}

Node* insertNode(Node* root, int val)
{
    if(root == NULL) {
        return new Node(val);
    }
    
    if(root->data > val)
    {
        root->left = insertNode(root->left, val);
    }else if(root->data < val)
    {
        root->right = insertNode(root->right, val);
    }

    return root;
}

int a[10010];


int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);


    Node* root = NULL;
    for(int i = 0; i < n; i++) 
    {
        root = insertNode(root, a[i]);
    }

    inOrder(root);
    return 0;
}
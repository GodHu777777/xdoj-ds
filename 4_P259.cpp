#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int k) : data(k), left(NULL), right(NULL) {};
};

void preOrder(Node* root)
{
    if(root == NULL) return;
    
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == NULL) return;
    
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

Node* insertNode(Node* root, int val)
{
    if(root == NULL) 
    {
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
    cin >> n;
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    
    Node* root = NULL;
    for(int i = 0; i < n; i++)
    {
        root = insertNode(root, a[i]);
    }
    preOrder(root);
    puts("");
    postOrder(root);
    return 0;
}
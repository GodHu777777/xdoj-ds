#include<bits/stdc++.h>
using namespace std;

struct Node{
    char data;
    Node* left;
    Node* right;

    Node(char t) : data(t), left(NULL), right(NULL) {};
};

int mySearch(char in[], char ch,int start, int end)
{
    for(int i = start; i < end; i++)
    {
        if(ch == in[i]) return i;
    }
}


Node* buildTree(char pre[], char in[], int inStart, int inEnd)
{
    static int preIndex = 0;
    
    if(inStart > inEnd)
    {
        return NULL;
    }

    Node* root = new Node(pre[preIndex++]);

    if(inStart == inEnd)
    {
        return root;
    }

    int inIndex = mySearch(in, root->data, inStart, inEnd);

    root->left = buildTree(pre, in, inStart, inIndex - 1);
    root->right = buildTree(pre, in, inIndex + 1, inEnd);

    return root;
}


void postOrder(Node* root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data;
}


int main()
{
    char pre[10010], in[10010];
    string s1, s2;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.size(); i++) pre[i] = s1[i], in[i] = s2[i];

    Node* root = NULL;

    root = buildTree(pre, in, 0, s1.size() - 1);
    postOrder(root);
    return 0;
}
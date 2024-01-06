#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define cy cout << "YES" << "\n" 
#define cn cout << "YES" << "\n" 
#define cnl cout << "\n"
#define DEBUG_(t) cout << "###DEBUG:" << t << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;

int pre[2005], in[2005];

struct Node{
    int data;
    int sum = 0;
    Node* left;
    Node* right;

    Node(int t): data(t), left(NULL), right(NULL) {};
};

int mySearch(int strt, int end, int data)
{
    for(int i = strt; i < end; i++)
    {
        if(data == in[i]) return i;
    }
}

Node* buildTree(int strt, int end)
{
    static int preIndex = 0;
    if(strt > end) return NULL;
    Node* root = new Node(pre[preIndex++]);
    if(strt == end) return root;

    int rootIndex = mySearch(strt, end, root->data);
    root->left = buildTree(strt, rootIndex - 1);
    root->right = buildTree(rootIndex + 1, end);

    return root;
}


void build(Node* &root)
{
    if(root->left == NULL && root->right == NULL)
    {
        root->sum = 0;
        return;
    }else 
    {
        build(root->left);
        build(root->right);
        root->sum = root->left->data + root->left->sum + root->right->data + root->right->sum;
    }
}

void inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->sum << " ";
    inOrder(root->right);
}

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> pre[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> in[i];
    }
    Node* root = NULL;
    root = buildTree(0, n - 1);
    build(root);
    inOrder(root);
    return 0;
}
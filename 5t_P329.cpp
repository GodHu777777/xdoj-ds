#include <iostream>
#include <cstdio>
#include<bits/stdc++.h>
#define int long long
#define ll long long
#define endl "\n"
#define cy cout << "YES" << "\n" 
#define cn cout << "NO" << "\n" 
#define cnl cout << "\n"
#define DEBUG_(t) cout << "###DEBUG:" << t << endl
#define mset(a) memset(a, 0, sizeof(a))
#define PII pair<int, int>
using namespace std;
const int MAXN = 100000 + 5;


//to store the template BST traversal, and same tree iff same preorder and inorder  
string preStd;
string inStd;

//to store current tree
string preCur;
string inCur;

struct Node{
    char data;
    Node* left;
    Node* right;
    Node (char t) : data(t), left(NULL), right(NULL) {};
};

void buildTree(char t, Node*& root)
{
    if(root == NULL) 
    {
        root = new Node(t);
    }
    //use else if is important
    else if(root->data > t) buildTree(t, root->left);
    else buildTree(t, root->right);
}

void preOrder(Node* root, string &s) 
{
    if (root != NULL) 
    {
        s += root->data;
        preOrder(root->left, s);
        preOrder(root->right, s);
    }
}

void inOrder(Node* root, string &s)
{
    if(root != NULL)
    {
        inOrder(root->left, s);
        s += root->data;
        inOrder(root->right, s);
    }
}

void cmp()
{
    preCur = inCur = "";

    string s;
    cin >> s;
    
    int n = s.size();
    Node* root = NULL;

    for(int i = 0; i < n; i++)
    {
        buildTree(s[i], root);
    }
    preOrder(root, preCur);
    inOrder(root, inCur);
    // DEBUG_(preStd);
    // DEBUG_(inStd);
    // DEBUG_(preCur);
    // DEBUG_(inCur);
    
    if(preCur == preStd && inCur == inStd) cy; 
    else cn;
}

void solve(int t)
{
    //reinitialize
    preStd = inStd = "";

    string templat;
    cin >> templat;

    int n = templat.size();
    
    Node* root = NULL;
    for(int i = 0; i < n; i++)
    {
        buildTree(templat[i], root);
    }

    preOrder(root, preStd);
    inOrder(root, inStd);

    while(t --)
    {
        cmp();
    }

}

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t != 0)
    {
        solve(t);
        cin >> t;
    }
    return 0;
}



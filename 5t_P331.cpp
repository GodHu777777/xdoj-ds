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

bool vis[100010];

/*题目： 二叉排序树的遍历
问题描述
输入一系列整数，建立二叉排序树，并进行前序，中序，后序遍历。
输入格式
输入第一行包括一个整数n(1<=n<=100)。
接下来的一行包括n个整数。
输出格式
将题目所给数据建立一个二叉排序树，并对二叉排序树进行前序、中序和后序遍历。
每种遍历结果输出一行。每行最后一个数据之后有一个空格。
输入中可能有重复元素，但是输出的二叉树遍历序列中重复元素不用输出。
样例输入
5
1 6 5 9 8
样例输出
1 6 5 9 8 
1 5 6 8 9 
5 8 9 6 1
样例说明
无。
*/
struct Node
{
    int data;
    Node* left;
    Node* right;
    Node (int t) : data(t), left(NULL), right(NULL){};
};

void BuildTree(Node*& root, int t)
{
    // DEBUG_(t);
    if(root == NULL) root = new Node(t);
    else if(t < root->data)
    {
        BuildTree(root->left, t);
        // DEBUG_(t);
    }else 
    {
        BuildTree(root->right, t);
        // DEBUG_(t);
    }
}

void preOrder(Node* root)
{   
    if(root == NULL) return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root)
{
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}


signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    
    Node* root = NULL;

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        if(!vis[t]) 
        {
            BuildTree(root, t);
            vis[t] = 1;
        }
    }

    preOrder(root);
    cnl;
    inOrder(root);
    cnl;
    postOrder(root);

    return 0;
}

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

/*
    题目： 二叉排序树之父结点
问题描述
给你N个关键字值各不相同的节点，要求你按顺序插入一个初始为空树的二叉排序树中，每次插入后成功后，求相应的父亲节点的关键字值，如果没有父亲节点，则输出-1。
输入格式
测试数据有两行。第一行是一个数字N（N<=100），表示待插入的节点数。第二行是N个互不相同的正整数，表示要顺序插入节点的关键字值，这些值不超过10^8。
输出格式
输出共N行，每次插入节点后，输出该节点对应的父亲节点的关键字值。
样例输入
5
2 5 1 3 4
样例输出
-1
2
2
5
3
样例说明
无。


*/

struct Node{
    int data;
    Node* left;
    Node* right;
    Node (int t) : data(t), left(NULL), right(NULL){};
};

void BuildTree(Node*& root, int t)
{
    if(root == NULL) 
    {
        root = new Node(t);
    }else if(t < root->data)
    {
        if(root->left == NULL) cout << root->data << "\n";
        BuildTree(root->left, t);
    }else 
    {
        if(root->right == NULL) cout << root->data << "\n";
        BuildTree(root->right, t);
    }
}

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    Node* root = NULL;

    cout << "-1\n";

    for(int i = 0; i < n; i++)
    {
        int t;
        cin >> t;

        BuildTree(root, t);
    }
    return 0;
}
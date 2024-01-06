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



struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int t) : data(t), left(NULL), right(NULL) {};
};

vector<int> vi;

Node* Nodes[10010];

void inOrder(Node* root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        vi.push_back(root->data);
        inOrder(root->right);
    }
}

int a[10010][3];

signed main()	
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    
    int rootIndex;
    cin >> rootIndex;

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
        Nodes[i] = new Node(a[i][0]);
    }

    for(int i = 1; i <= n; i++)
    {
        if(a[i][1] != 0)
        {
            Nodes[i]->left = Nodes[a[i][1]];
        }
        if(a[i][2] != 0)
        {
            Nodes[i]->right = Nodes[a[i][2]];
        }
    }

    Node* root = Nodes[rootIndex];
    inOrder(root);


    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(vi[j] < vi[i]) 
            {
                cout << "false";
                return 0;
            }
        }
    }
    cout << "true";
    return 0;
}
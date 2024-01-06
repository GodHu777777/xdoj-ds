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
    Although this can AC.
    actually it is a fake code since if I create a tree like
                        5
                      /   \
                    4      10
                         /    \
                        3      17  
    this structure, this code will output true, but evidently it is not a BST.
*/ 

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node(int t) : data(t), left(NULL), right(NULL) {};
};

Node* Nodes[10010];

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
        //check left child
        if(a[a[i][1]][0] != 0 && a[a[i][1]][0] > a[i][0])
        {
            cout << "false";
            return 0;
        }  
        if(a[a[i][2]][0] != 0 && a[a[i][2]][0] < a[i][0])
        {
            cout << "false";
            return 0;
        }       
    }
    cout << "true";
    return 0;
}
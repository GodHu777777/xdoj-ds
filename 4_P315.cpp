#include<bits/stdc++.h>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(NULL), right(NULL) {}
};

TreeNode* buildTree(vector<int>& traversal, int& index) {
    if (index >= traversal.size() || traversal[index] == 0) {
        index++;
        return NULL;
    }

    TreeNode* node = new TreeNode(traversal[index]);

    index++;

    node->left = buildTree(traversal, index);

    node->right = buildTree(traversal, index);

    return node;
}

void inorderTraversal(TreeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        cout << (char)root->data << " ";
        inorderTraversal(root->right);
    }
}

int main() {
    vector<int> traversal;
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '#') traversal.push_back(0);
        else traversal.push_back((int)s[i]);
    }
    int index = 0;

    TreeNode* root = buildTree(traversal, index);

    inorderTraversal(root);
    cout << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
    vector<TreeNode*> res;
    unordered_set<int> st;

    void deleteNode(TreeNode* &root) {
        if (root) {
            deleteNode(root->left);
            deleteNode(root->right);
            if (st.find(root->val) != st.end()) {
                if (root->left) res.push_back(root->left);
                if (root->right) res.push_back(root->right);
                root = NULL;
            }
        }
    }

public:
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        for (int i = 0; i < to_delete.size(); i++) {
            st.insert(to_delete[i]);
        }
        deleteNode(root);
        if (root) res.push_back(root);
        return res;
    }
};

// Helper function to print the tree in-order (for testing purposes)
void inorder(TreeNode* root) {
    if (root) {
        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

int main() {
    // Example usage:
    // Construct the tree: [1, 2, 3, 4, 5, 6, 7]
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Nodes to delete
    vector<int> to_delete = {3, 5};

    Solution sol;
    vector<TreeNode*> result = sol.delNodes(root, to_delete);

    cout << "Remaining forest:" << endl;
    for (TreeNode* tree : result) {
        inorder(tree);
        cout << endl;
    }

    return 0;
}

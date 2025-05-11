#include <iostream>
#include <climits> // Include this for INT_MIN and INT_MAX
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val = 0, TreeNode* left = nullptr, TreeNode* right = nullptr)
        : val(val), left(left), right(right) {}
};

void in_order_traverse(TreeNode* current) {
    if (current == nullptr) {
        return;
    }
    in_order_traverse(current->left);

    cout << current->val << " ";

    in_order_traverse(current->right);
}

void def(TreeNode* node, int& prev, int& diff) {
    if (!node) {
        return;
    }

    def(node->left, prev, diff);
    if (prev != INT_MIN) {
        diff = min(diff, node->val - prev);
    }
    prev = node->val;

    def(node->right, prev, diff);
}

int MinNumFinder(TreeNode* root) {
    int prev = INT_MIN;
    int diff = INT_MAX;
    def(root, prev, diff);
    return diff;
}

int main() {

    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    int result = MinNumFinder(root);
    cout << "Minimum Absolute Difference: " << result << endl;

  

    return 0;
}

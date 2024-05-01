// bring in definitions
#include <iostream>
using namespace std;

#include "binary.h"

int main() {
    TreeNode * root = buildTree();
    cout << root->right->data << endl;

    cout << checkLeaf(root->right) << endl; // should be 0
    cout << checkLeaf(root->left->right->left) << endl; // should be 1

    cout << nodeLevel(root, 15) << endl; // should be 2
    cout << nodeLevel(root, 12) << endl; // should be 4
    cout << nodeLevel(root, 99) << endl; // should be -1
}
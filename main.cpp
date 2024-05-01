#include <iostream>
using namespace std;


// Define a new class, BinaryTree

class TreeNode {
    public:
        int data;
        TreeNode *right;
        TreeNode *left;

        // define a constructor for this node
            // if no input data parameter, value can be zero
        TreeNode(int d = 0) {
            data = d;
        }
};

class BinaryTree {
    public:
        TreeNode *root;

    // define a function to print all values in the tree
        // if the tree is empty, return
        
        // if not, print the node
            //then, print the subtree on the right
            // then, print the subtree on the left


};



int main() {
    // Declare a Binary Tree Object
    BinaryTree myTree;

    // access the root attribute, and place in a treeNode with 10
    myTree.root = new TreeNode(100);

    // create the children of the root node
        // 6 on the left and 5 on the right
    myTree.root -> left = new TreeNode(10);
    myTree.root -> right = new TreeNode(200);

    // create the level 2 nodes
        // 2 is left child of 6
        // 20 is the left child of 5
        // 100 is the right child of 5
    myTree.root -> left -> left = new TreeNode(5);
    myTree.root -> right -> left = new TreeNode(202);

    // create the level 3 nodes
    myTree.root -> left -> left -> right = new TreeNode(100);

    cout << "Hello World!";


}





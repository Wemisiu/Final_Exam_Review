// 
class TreeNode {
    public:
        int data;
        TreeNode *right, *left;

        TreeNode(int inData = 0) {
            data = inData;
            right = nullptr;
            left = nullptr;
        }};
TreeNode* buildTree() {
    // manually create the tree for the following values
        // returns a pointer to the root node
    // 13, 19, 15, 16, 2, 6, 7, 18, 12, 3
    TreeNode * root = new TreeNode(100);
    
    // children of root (level 1)
    root ->right = new TreeNode(200);
    root->left = new TreeNode(10);

    // children of 19 (lvl 2)
    root->right->right = new TreeNode(202);

    // children of 2 (lvl 2)
    root->left->left = new TreeNode(5);

    // children of 15 (lvl 3)
    root->left->left->right = new TreeNode(6);



    return root;
}


void rightmost(TreeNode * current) {
    if(current -> right == nullptr) {

        cout <<  current -> data;
    }

    else {

        rightmost(current->right);
    }
}

void leftmost(TreeNode * current) {

    if (current -> left == nullptr)
     {
        cout << current -> data;
     }

     else {

        leftmost(current-> left);
     }
     
}



// check if node is a leaf
bool checkLeaf(TreeNode * node) {
    return (node ->right == nullptr && node->left == nullptr);
}



    // check the level of a specific node (by value)
        // if not present, return -1
    int nodeLevel(TreeNode* root, int target) {
        // create a "current" pointer
        // level always starts from zero at the root
        TreeNode *current = root;
        int level = 0;

        while(current != nullptr) {
            // is this the target?
            if(current->data == target) {
                return level;
            }
            else if(current->data < target) {
                // move to the right, also increase level
                level++;
                current = current->right;
            }
            else {
                // target is smaller than current
                // move to the left
                level++;
                current = current->left;
            }
        }

        return -1;
    }




    int nodeLevelR(TreeNode* root, int target) {
        // BASE CASE
        // RECURSIVE CASE
        return -1;

    }





















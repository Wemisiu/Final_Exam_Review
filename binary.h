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
    TreeNode * root = new TreeNode(13);
    
    // children of root (level 1)
    root ->right = new TreeNode(19);
    root->left = new TreeNode(2);

    // children of 19 (lvl 2)
    root->right->left = new TreeNode(15);

    // children of 2 (lvl 2)
    root->left->right = new TreeNode(6);

    // children of 15 (lvl 3)
    root->right->left->right = new TreeNode(16);

    // children of 6 (lvl 3)
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(7);

    // children of 3 (none)

    // children of 7 (lvl 4)
    root->left->right->right->right = new TreeNode(12);

    // children of 16 (lvl 4)
    root->right->left->right->right = new TreeNode(18);

    return root;
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





















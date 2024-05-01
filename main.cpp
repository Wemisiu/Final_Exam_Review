

void findMaxR(TreeNode * current) {

    // go all the way to the right

    if (current -> right == nullptr) {

        return cout << current-> data;
    }

    findMaxR(current -> right);

   
}

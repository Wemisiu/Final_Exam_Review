// bring in definitions
#include <iostream>
using namespace std;

#include "binary.h"

int main() {
    TreeNode * root = buildTree();

    
    rightmost(root);
    cout << endl;
    leftmost(root);
}
    TreeNode* insertIntoBST(TreeNode* node, int val) {
        //your code goes here
        if(node== nullptr){
            return new TreeNode(val);
        }
        if(val< node->data){
            node->left = insertIntoBST(node->left, val);
        }else if(val> node->data){
            node->right = insertIntoBST(node->right, val);
        }
        return node;
    }
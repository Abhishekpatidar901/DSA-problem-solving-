TreeNode* deleteNode(TreeNode* root, int key){
    if(root== NULL){
        return NULL;
    }
    if(root->data == key){
        return connector(root);
    }
    TreeNode* node = root;
    while(node){
        if(node->data >key){
            if(node->left && node->left->data ==key){
                node->left =connector(node->left);
                break;
            }else{
                node= node->left;
            }
        }else{
            if(node->right && node->right->data == key){
                node->right = connector(node->right);
                break;
            }else{
                node= node->right;
            }
        }
    }
    return root;
}
TreeNode* connector(TreeNode* root){
    if(!root->left){
        return root->right;
    }else if(!node->right){
        return root->left;
    }
    TreeNode* leftc =root->left;
    TreeNode* lrc = root->right;
    while(lrc -> left){
        lrc =lrc->left;
    }
    lrc ->left =leftc;
    return root->right;
}
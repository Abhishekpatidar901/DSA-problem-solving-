TreeNode* lowestcommonancestor(TreeNode* root, TreeNode* p, TreeNode* q){
    iff(root== NULL || root== p || root== q){
        return root;
    }
    TreeNode* left = lowestcommonancestor(root->left,p,q);
    TreeNode* right = lowestcommonancestor(root->right,p,q);

    if(left == NULL){
        return right;
    }
    else if(right == NULL){
        return left;
    }else{
        return root;
    }
}
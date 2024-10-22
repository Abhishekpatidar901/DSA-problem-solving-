int calculateh(TreeNode* node){
    if(node == nullptr){
        return 0;
    }
    int lefth =calculateh(root->left);
    int righth calculateh(node->right);
    diameter =max(diameter,lefth+righth);

    return 1+max(lefth,righth);
}
int diameter(TreeNode* root){
    int diameter =0;
    calculateh(root);
    return diameter;
}
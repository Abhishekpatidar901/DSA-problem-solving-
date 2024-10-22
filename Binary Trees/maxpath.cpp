int maxpathsum(TreeNode* root, int& maxi){
    if(root == nullptr){
        return 0;
    }
    int leftmaxpath = max(0,maxpathsum(root->left,maxi));
    int rightmaxpath =max(0,maxpathsum(root->right,maxi));
    maxi = max(maxi, leftmaxpath+rightmaxpath+root->data);
    return max(leftmaxpath,rightmaxpath)+root->data;
}
TreeNode* buildtree(vector<int>& inorder, vector<int>& postorder){
    if(inorder.empty() || postorder.empty()|| inorder.size()!= postorder.size()){
        return nullptr;
    }
    unordered_map<int,int> inordermap;
    for(int i=0;i<inorder.size();i++){
        inordermap[inorder[i]]=i;
    }
    return buildtreehelper(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,inordermap);
}

TreeNode* buildtreehelper(vector<int>& inorder, int instart, int inend, vector<int>& postorder, int poststart, int postend,unordered_map<int,int>& inordermap){
    if(instart > inend || poststart >postend){
        return nullptr;
    }
    int rootvalue = postorder[postend];
    TreeNode* root = new TreeNode(rootvalue);
    int rootindexinorder = inordermap[rootvalue];
    int leftsub= rootindexinorder -instart;

    root->left =buildtreehelper(inorder, instart,rootindexinorder-1,postorder, poststart, poststart+leftsub-1,inordermap);
    root->right = buildtreehelper(inorder, rootindexinorder+1,inend,postorder, postorder+leftsub,postend-1,inordermap);
    return root;
}
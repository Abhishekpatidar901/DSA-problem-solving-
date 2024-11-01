TreeNdoe* buildTree(vector<int>& preorder, vector<int>& inorder){
    unordered_map<int,int> inmap;
    for(int i=0;i<inorder.size();i++){
        inmap[inorder[i]]=i;
    }

    return builddtree(vector<int>&preorder,0,preorder.size()-1, inorder,0, inorder.size()-1,inmap);
}

TreeNode* builddtree(vector<int>&preorder, int prestart, int preend,vector<int>& inorder, int instart, int inend,unordered_map<int,int>&um){

    if(prestart> preend || instart>inend){
        return nullptr;
    }
    TreeNode* root = new TreeNode(preorder[prestart]);
    int inroot =um[root->data];
    int numleft =inroot- instart;

    root->left = builddtree(preorder, prestart+1, prestart+numsleft,inorder, instart, inroot-1,um);
    root->right =builddtree(preorder, prestart+numsleft+1, preend,inorder, inroot+1, inend,um);
    return root;
}
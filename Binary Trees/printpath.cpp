bool getpath(TreeNode* root, vector<int>&arr, int x){
    if(!root){
        return false;
    }
    arr.push_back(root->val);
    if(root->val ==x){
        return true;
    }
    if(get(root->left,arr,x)||getpath(root->right,arr,x)){
        return true;
    }
    arr.pop_back();
    return false;
}

vector<int>solve(TreeNode* A, int b){
    vector<int>arr;
    if(A== NULL){
        return arr;
    }
    getpath(A,arr,b);
    return arr;
}
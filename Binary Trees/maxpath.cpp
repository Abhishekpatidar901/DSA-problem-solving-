int maxpathsum(TreeNode* root, int& maxi){
if(root==nullptr){
    return 0;
}
int leftm = max(0,maxpathsum(root->left,maxi));
int rightm = max(maxi,maxpathsum(root->right,maxi));
maxi = max(maxi, leftm+rightm+root->data);
return max(leftm,rightm)+root->data;

}

int main(){
 int maxi = INT_MIN;
 maxpathsum(root,maxi);
 return maxi;


    return 0;
}









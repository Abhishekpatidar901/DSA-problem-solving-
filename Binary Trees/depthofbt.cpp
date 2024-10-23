int maxdepth(Node* root){

    if(root== NULL){
        return 0;
    }
    int lefth =maxdepth(root->left);
    int righth=maxdepth(root->right);

    return 1+max(lefth,righth);
}

int maxdepth(Node* root){
    queue<Node*>q;
    int ans=0;
    if(root == NULL){
        return 0;
    }
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* front = q.front();
            q.pop();

            if(front->left != nullptr){
                q.push(front->left);
            }
            if(front->right!= nullptr){
                q.push(front->right);
            }
        }
        ans +=1;
    }
    return ans;
}
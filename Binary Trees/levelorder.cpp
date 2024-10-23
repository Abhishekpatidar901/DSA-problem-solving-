vector<vector<int>>level(Node* root){
vector<vector<int>>ans;
queue<Node*>q;
q.push(root);

while(!q.empty()){

    int size = q.size();
    vector<int>level;
    for(int i=0;i<size;i++){
     Node* temp=q.front();
     q.pop();
     level.push_back(temp->data);
    
    if(temp->left != nullptr){
        q.push(temp->left);
    }
    if(temp->right != nullptr){
        q.push(temp->right);
    }
}
ans.push_back(level);
}
return ans;

}
vector<int> distancek(TreeNode* root, TreeNode* target, int k){
    unordered_map<TreeNode*, TreeNode*> parentmap;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* node =q.front();
        q.pop();
        if(node->left){
            parentmap[node->left] = node;
            q.push(node->left);
        }
        if(node->right){
            parentmap[node->right]= node;
            q.push(node->right);
        }
    }
    vector<int>result;
    unordered_set<TreeNode*> visited;
    q.push(target);
    visited.insert(target);
    int currentdistance =0;
    while(!q.empty()){
        if(currentdistance == k){
            while(!q.empty()){
                result.push_back(q.front()->data);
                q.pop();
            }
            return result;
        }
        int size =q.size();
        for(int i=0;i<size;i++){
            TreeNode* node =q.front();
            q.pop();
            if(node->left && visited.find(node->left)==visited.end()){
                q.push(node->left);
                visited.insert(node->left);
            }
                        if(node->right && visited.find(node->right)==visited.end()){
                q.push(node->right);
                visited.insert(node->right);
            }
                            if (parentmap.find(node) != parentmap.end() && visited.find(parentmap[node]) == visited.end()) {
                    q.push(parentmap[node]);
                    visited.insert(parentMap[node]);
                }
        }
      currentdistance ++;
    }
    return result;
}
    vector<vector<int> > verticalTraversal(TreeNode* root) {
    	//your code goes here
        map<int,int>mp;
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode* ,pair<int,int>>>todo;
        todo.push({root,{0,0}});
        while(!todo.empty()){
            auto p =todo.front();
            todo.pop();
            TreeNode* node = p.first;
            int x =p.second.first;
            int y= p.second.second;
            if(mp.find(x) == mp.end()){
                mp[x] = node->data;
            }
            nodes[x][y].insert(node->data);
            if(node->left){
                todo.push({node->left,{x-1,y+1}});
            }
            if(node->right){
                todo.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto p: nodes){
            vector<int>col;
            for(auto q: p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        vector<int>ans2;
          for (auto it : mpp) {
            ans2.push_back(it.second);
        }
        return ans2;

    }
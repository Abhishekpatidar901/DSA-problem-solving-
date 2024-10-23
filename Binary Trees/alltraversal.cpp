vector<vector<int>> treetraversal(Node* root){
    vector<int> pre, in, post;
    if(root==nullptr){
        return {pre,in,post};
    }
    stack<pair<Node*,int>>st;
    st.push({root,1});
    while(!st.empty()){
        auto [node,state] = st.top();
        st.pop();
        if(state==1){
            pre.push_back(node->data);
            st.push({node,2});
            if(node->left!= nullptr){
                st.push({node->left,1});
            }
        }else if(state==2){
            in.push_back(node->data);
            st.push({node,3});
            if(node->right != nullptr){
                st.push{{node->right,1}};
            }
        }else{
            post.push_back(node->data);
        }
    }
    return {in,pre,post};
}
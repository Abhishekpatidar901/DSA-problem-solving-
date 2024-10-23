vector<int>postorder(Node* root){
    vector<int>postorder;
    stack<Node*>st1;
    stack<Node*>st2;
    if(root==nullptr){
        return postorder;
    }
    st1.push(node);
    while(!s1.empty()){
        Node* node= st1.top();
        st1.pop();
        st2.push(node);
    if(node->left){
        st1.push(node->left);
    }
    if(node->right){
        st1.push(node->right);
    }

    }
    while(!st2.empty()){
        Node* node =st2.top();
        st2.pop();
        postorder.push_back(node->data);
    }
    return postorder;

}
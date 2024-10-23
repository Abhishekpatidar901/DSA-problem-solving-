#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data,
    Node* left;
    Node* right;
    Node(int val) : data(val){
        left = nullptr;
        right = nullptr;

    }
}

class solution {
    public: 
    void func(Node* node, vector<int>&ans){
        if(node== nullptr){
            return;
        }
        ans.push_back(node->data);
        func(node->left,ans);
        func(node->right,ans);
    }
    vector<int>preorder(Node* root){
        vector<int> preorder;
        if(root ==nullptr){
            return preorder;
        }
stack<Node*>st;


st.push(root);

while(!st.empty()){
    root = st.top();
    st.pop();
    preorder.push_back(root->data);
if(root->right != nullptr){
    st.push(root->right);
}
if(root->left != nullptr){
    st.push(root->left);
}

}
return preorder;
}
vector<int>inorder(Node* root){
    vector<int>inorder;
    stack<Node*>st;
    Node* node = root;
    while(!st.empty()){
        if(node!=nullptr){
            st.push(node);
            node= node->left;
        }else{
            if(st.empty()){
                break;
            }
            node= st.top();
            st.pop();
            inorder.push_back(node->data);
            node= node->right;
        }
    }
    return inorder;
}
vector<int>postorder(Node* root){
        vector<int>postorder;
    if(root == nullptr){
        return postorder;
    }

    stack<Node*>st;
    Node* current =root;
    Node* prev =nullptr;

    while(current != nullptr||!st.empty()){
   while(current!= nullptr){
    st.push(current);
    current= current->left;
   }
   current = st.top();
   if(current->right ==nullptr || current->right == prev){
    result.push_back(current->data);
    st.pop();
    prev =current;
    current = nullptr;
   }else{
   current = current->right;
   }

    }
    return result;
}
}
int main(){
 Node* root = new Node(1);
 root->left= new Node(2);
 root->right = new Node(3);
 root->left->left = new Node(4);
 root->left->right = new Node(5);

Solution solution;
vector<int>result = solution.preorder(root);
cout<<"Preorder Traversal";
for(int val : result){
    cout<< val<<" ";
}
cout<<endl;


    return 0;
}
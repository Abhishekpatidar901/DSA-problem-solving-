#include<bits/stdc++.h>
using namespace std;

struct Node {
int data;
Node* left;
Node* right;

Node(int v):data(v){
    left= nullptr;
    right=nullptr;
}
}
class solution {
public:
vector<int> inorder(Node* root){
    vector<int>inorder;
    stack<Node*>st;
    Node* node = root;

    while(true){
        if(node!=Null){
         st.push(node);
         node =node->left;
        }else{
            if(st.empty()){
                break;
            }
            node =st.top();
            st.pop();
            inorder.push_back(node->data);
            node= node->right;
        }
    }
    return inorder;
}




}
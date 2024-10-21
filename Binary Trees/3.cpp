#include <bits/stdc++.h>
using namespace std;
 struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val):data(val){
        left = nullptr;
        right= nullptr;
    }
 }
 void func(vector<int>&p,Node* r){
    if(r ==NULL){
        return;
    }
    func(r->left,p);
    func(r->right,p);
    p.push_back(r->data);
 }
vector<int> postorder(TreeNode* root) {
    // Vector to store postorder traversal result
    vector<int> result;  
    if (root == nullptr) return result;

    // Stack to manage nodes
    stack<TreeNode*> nodeStack;  
    TreeNode* current = root;
    TreeNode* prev = nullptr;

    while (current != nullptr || !nodeStack.empty()) {
        // Traverse the left subtree
        while (current != nullptr) {
            nodeStack.push(current);  // Push current node to stack
            current = current->left;  // Move to the left child
        }

        // Peek the top of the stack
        current = nodeStack.top();  

        // If the right child is null or already visited, process current node
        if (current->right == nullptr || current->right == prev) {
            result.push_back(current->data);  // Add node data to result
            nodeStack.pop();  // Remove the node from the stack
            prev = current;  // Update the previous node
            current = nullptr;  // Continue with the next node
        } else {
            // Move to the right child
            current = current->right;
        }
    }

    return result;
}
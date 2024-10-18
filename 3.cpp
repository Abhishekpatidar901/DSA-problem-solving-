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
vector<int>postorder(Node* root){
 vector<int>postorder;
stack<Node
}
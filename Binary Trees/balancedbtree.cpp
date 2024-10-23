#include <bits/stdc++.h>
using namespace std;

struct Treenode{
    int data;
    Treenode *left;
    Treenode *right;
    Treenode(int val): data(val),left(nullptr),right(nullptr){
    }
};

bool isbalanced(Treenode *root){
    return dfsheight(root) != -1;
}
int dfsheight(Treenode *root){
if(root == nullptr){
    return 0;
}
int lefth = dfsheight(root->left);
if(lefth == -1){
    return -1;
}
int righth =dfsheight(root->right);
if(righth==-1){
    return -1;
}
if(abs(lefth-righth)>1){
    return -1;
}
return 1+max(lefth,righth);
}
bool isidentical(Node* p, Node* q){
    if(p==nullptr && q==nullptr){
        return true;
    }
    if(q==nullptr || q==nullptr){
        return false;
    }
    if(p->data !=q->data){
        return false;
    }
    return isidentical(p->left,q->left) && isidentical(p->right,q->right);
}
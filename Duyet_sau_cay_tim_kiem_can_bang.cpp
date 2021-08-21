#include<bits/stdc++.h>
using namespace std;
vector<int> vnode;
struct Node{
    int val;
    Node *left,*right;
};
Node* newNode(int val){
    Node *tmp = new Node;
    tmp->val = val;
    tmp->left = tmp->right = nullptr;
    return tmp;
}
void constructBST(Node* &root,int val){
    if(!root) root = newNode(val);
    if(root->val>val) constructBST(root->left,val);
    if(root->val<val) constructBST(root->right,val);
}
void build(Node* &root,int l,int r){
    if(l>r) return;
    else{
        int m = l+(r-l)/2;
        constructBST(root,vnode[m]);
        build(root,l,m-1);
        build(root,m+1,r);
    }
}
void init(Node* &root){
    int n;
    cin>>n;
    vnode.resize(n);
    for(auto &i:vnode) cin>>i;
    sort(vnode.begin(),vnode.end());
    build(root,0,n-1);
}
void traverse(Node* root){
    if(!root) return;
    if(root->left) traverse(root->left);
    if(root->right) traverse(root->right);
    cout<<root->val<<' ';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node *root = nullptr;
        init(root);
        traverse(root);
        cout<<endl;
    }
}
/*
2

11

40  28  45 38  33  15  25  20  23  35  30

10

1  2  3  4  5  6  7  8  9  10
*/

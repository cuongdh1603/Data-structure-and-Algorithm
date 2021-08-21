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
void build(Node* &root,int x){
    if(!root) root = newNode(x);
    if(root->val<x) build(root->right,x);
    if(root->val>x) build(root->left,x);
}
void init(Node* &root){
    int n,x;
    cin>>n;
    vnode.clear();
    while(n--){
        cin>>x;
        build(root,x);
    }
}
void traverse(Node* root){
    if(!root) return;
    vnode.push_back(root->val);
    if(root->left) traverse(root->left);
    if(root->right) traverse(root->right);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* root = nullptr;
        init(root);
        traverse(root);
        for(int i=0;i<vnode.size();i++) cout<<vnode[i]<<' ';
        cout<<endl;
    }
}
/*
2
9
7 4 12 3 6 8 1 5 10
6
1 3 4 6 7 8
*/

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
    map<int,Node*> mp;
    while(n--){
        cin>>x;
        build(root,x);
        /*
        Node* parent;
        if(mp.find(par)==mp.end()){
            parent = newNode(x);
            mp[x] = parent;
            if(!root) root = parent;
        }
        else parent = mp[x];
        */
    }
}
void traverse(Node* root){
    if(!root) return;
    if(root->left) traverse(root->left);
    if(root->right) traverse(root->right);
    vnode.push_back(root->val);
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
5
40 30 35 80 100
8
40 30 32 35 80 90 100 120
*/

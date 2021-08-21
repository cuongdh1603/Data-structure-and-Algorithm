#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> vnode;
struct Node{
    ll val;
    Node *left,*right;
};
Node* newNode(ll val){
    Node *tmp = new Node;
    tmp->val = val;
    tmp->left = tmp->right = nullptr;
    return tmp;
}
void build(Node* &root,ll x){
    if(!root) root = newNode(x);
    if(root->val<x) build(root->right,x);
    if(root->val>x) build(root->left,x);
}
void init(Node* &root){
    ll n,x;
    cin>>n;
    vnode.resize(n);
    for(int i=0;i<n;i++){
        cin>>vnode[i];
        build(root,vnode[i]);
    }
}
void traverseBfs(Node* root){
    deque<Node*> dq;
    set<ll> st;
    dq.push_back(root);
    while(dq.size()){
        Node* u = dq.front();
        dq.pop_front();
        int exit = 0;
        if(u->left) dq.push_back(u->left),exit++;
        if(u->right) dq.push_back(u->right),exit++;
        if(!exit) st.insert(u->val);
    }
    for(int i=0;i<vnode.size();i++)
        if(st.find(vnode[i])!=st.end())
        cout<<vnode[i]<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* root = nullptr;
        init(root);
        traverseBfs(root);
    }
}
/*
2

6

10 5 1 7 40 50

11

30 20 15 25 23 28 40 35 33 38 45
*/

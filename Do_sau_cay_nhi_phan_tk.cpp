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
    }
}
void traverseBfs(Node* root){
    deque<pair<Node*,int>> dq;
    dq.push_back({root,0});
    int maxlv = 0;
    while(dq.size()){
        Node* u = dq.front().first;
        int v = dq.front().second;
        maxlv = max(maxlv,v);
        dq.pop_front();
        if(u->left) dq.push_back({u->left,v+1});
        if(u->right) dq.push_back({u->right,v+1});
    }
    cout<<maxlv<<endl;
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

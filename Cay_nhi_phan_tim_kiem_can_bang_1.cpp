#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<int> vnode;
/*
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
void init(Node* &root){
    int n;
    cin>>n;
    vnode.clear();
    map<int,Node*> mp;
    int par,chi;
    string side;
    while(n--){
        cin>>par>>chi>>side;
        Node* parent;
        if(mp.find(par)==mp.end()){
            parent = newNode(par);
            mp[par] = parent;
            if(!root) root = parent;
        }
        else parent = mp[par];
        Node* child = newNode(chi);
        if(side=="L") parent->left = child;
        if(side=="R") parent->right = child;
        mp[chi] = child;
    }
}
void traverse(Node *root){
    if(!root) return;
    else{
        vnode.push_back(root->val);
        if(root->left) traverse(root->left);
        if(root->right) traverse(root->right);
    }
}
*/
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vnode.resize(n);
        for(ll i=0;i<n;i++) cin>>vnode[i];
        sort(vnode.begin(),vnode.end());
        if(n&1) cout<<vnode[n/2];
        else cout<<vnode[n/2-1];
        cout<<endl;
        /*
        Node* root = nullptr;
        init(root);
        traverse(root);
        int len = vnode.size();
        sort(vnode.begin(),vnode.end());
        if(len&1) cout<<vnode[len/2];
        else cout<<vnode[len/2-1];
        cout<<endl;
        */
    }
}
/*
2

11

40  28  45 38  33  15  25  20  23  35  30

10

1  2  3  4  5  6  7  8  9  10
*/

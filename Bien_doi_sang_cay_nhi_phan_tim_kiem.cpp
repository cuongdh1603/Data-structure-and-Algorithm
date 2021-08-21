#include<bits/stdc++.h>
using namespace std;
int check;
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
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* root = nullptr;
        init(root);
        traverse(root);
        sort(vnode.begin(),vnode.end());
        for(int i=0;i<vnode.size();i++) cout<<vnode[i]<<' ';
        cout<<endl;
    }
}
/*
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
4
10 2 L 10 7 R 2 8 L 2 4 R
*/

#include<bits/stdc++.h>
using namespace std;
int check;
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
    check = 1;
    int par,chi;
    string side;
    map<int,Node*> mp;
    while(n--){
        cin>>par>>chi>>side;
        Node *parent = nullptr;
        if(mp.find(par)==mp.end()){
            parent = newNode(par);
            mp[par] = parent;
            if(!root) root = parent;
        }
        else parent = mp[par];
        Node *child = newNode(chi);
        if(side=="L") parent->left = child;
        if(side=="R") parent->right = child;
        mp[chi] = child;
    }
}
void traverse(Node* root){
    if(!root) return;
    if((!root->left&&root->right)||(root->left&&!root->right)){
        check = 0;
        return;
    }
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
        cout<<(check?"YES":"NO")<<endl;
    }
}
/*
2
4
1 2 L 1 3 R 2 4 L 2 5 R
3
1 2 L 1 3 R 2 4 L
*/

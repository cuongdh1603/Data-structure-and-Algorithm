#include<bits/stdc++.h>
#define ll long long
#define mxn 1003
using namespace std;
int n,sum;
struct Node{
    int val;
    Node *left,*right;
};
Node* newNode(int v){
    Node* tmp = new Node;
    tmp->val = v;
    tmp->left = tmp->right = nullptr;
    return tmp;
}
void init(Node* &root){
    sum = 0;
    int anc,des;
    string side;
    map<int,Node*> mp;
    cin>>n;
    while(n--){
        cin>>anc>>des>>side;
        Node *parent;
        if(mp.find(anc)==mp.end()){
            parent = newNode(anc);
            mp[anc] = parent;
            if(!root) root = parent;
        }
        else parent = mp[anc];
        Node *child = newNode(des);
        if(side=="L") parent->left = child;
        if(side=="R") parent->right = child;
        mp[des] = child;
    }
}
void traverse(Node *root){
    if(!root) return;
    if(root->right&&!root->right->left&&!root->right->right){
        sum += root->right->val;
    traverse(root->left);
    traverse(root->right);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node *root = nullptr;
        init(root);
        traverse(root);
        cout<<sum<<endl;
    }
}
/*
2
2
1 2 L 1 3 R
5
10 20 L 10 30 R 20 40 L 20 60 R 30 90 L
*/

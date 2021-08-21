#include<bits/stdc++.h>
using namespace std;
int n,nodeLeaf;
vector<int> a;
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
void init(Node* &root,int l,int r){
    if(l>r) return;
    int m = (l+r)/2;
    root = newNode(a[m]);
    init(root->left,l,m-1);
    init(root->right,m+1,r);
}
void traverse(Node* root){
    if(!root) return;
    if(!root->left&&!root->right){
        nodeLeaf++;
        return;
    }
    if(root->left) traverse(root->left);
    if(root->right) traverse(root->right);
}
int main(){
    int test;
    cin>>test;
    while(test--){
        cin>>n;
        a.resize(n);
        for(auto &i:a) cin>>i;
        sort(a.begin(),a.end());
        nodeLeaf = 0;
        Node* root = nullptr;
        init(root,0,n-1);
        traverse(root);
        cout<<nodeLeaf<<endl;
    }
}
/*
2

11

40  28  45 38  33  15  25  20  23  35  30

10

1  2  3  4  5  6  7  8  9  10
*/




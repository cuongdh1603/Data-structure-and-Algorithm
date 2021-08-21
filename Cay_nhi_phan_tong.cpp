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

void sumOfNode(Node* root,int &sum){
    if(!root) return ;
    sum += root->val;
    if(root->left) sumOfNode(root->left,sum);
    if(root->right) sumOfNode(root->right,sum);
}
int isSumTree(Node* root){
    if(!root) return 1;
    if(!root->left&&!root->right) return 1;
    int sum1=0,sum2=0;
    sumOfNode(root->left,sum1);
    sumOfNode(root->right,sum2);
    int total = sum1 + sum2;
    if(root->val==total){
        if(isSumTree(root->left)&&isSumTree(root->right))
            return 1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node *root = nullptr;
        init(root);
        if(isSumTree(root)) cout<<1<<endl;
        else cout<<0<<endl;
    }
}
/*
2
2
3 1 L 3 2 R
4
10 20 L 10 30 R 20 40 L 20 60 R
*/

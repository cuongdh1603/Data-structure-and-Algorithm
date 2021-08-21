#include<bits/stdc++.h>
using namespace std;
vector<int> ans;
struct Node{
    int val;
    Node *left,*right;
};
Node *newNode(int val){
    Node *tmp = new Node;
    tmp->val = val;
    tmp->left = tmp->right = nullptr;
    return tmp;
}
void init(Node* &root){
    int n;
    cin>>n;
    ans.clear();
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
void traverseBfs(Node* root){
    deque<Node*> dq;
    dq.push_back(root);
    while(dq.size()){
        Node* u = dq.front();
        ans.push_back(u->val);
        dq.pop_front();
        if(u->right) dq.push_back(u->right);
        if(u->left) dq.push_back(u->left);
    }
}
void result(){
    reverse(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node *root = nullptr;
        init(root);
        traverseBfs(root);
        result();
    }
}
/*
2
2
1 2 R 1 3 L
4
10 20 L 10 30 R 20 40 L 20 60 R
*/

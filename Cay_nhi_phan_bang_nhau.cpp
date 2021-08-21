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
    //ans.clear();
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
void traverseBfs(Node* root1,Node* root2){
    deque<Node*> dq1,dq2;
    dq1.push_back(root1);
    dq2.push_back(root2);
    while(dq1.size()&&dq2.size()){
        Node *u = dq1.front();
        Node *v = dq2.front();
        dq1.pop_front();
        dq2.pop_front();
        if(u->val!=v->val){
            check = 0;
            break;
        }
        if(u->left) dq1.push_back(u->left);
        if(u->right) dq1.push_back(u->right);
        if(v->left) dq2.push_back(v->left);
        if(v->right) dq2.push_back(v->right);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Node* root1 = nullptr,*root2 = nullptr;
        init(root1);
        init(root2);
        traverseBfs(root1,root2);
        cout<<(check?"YES":"NO")<<endl;
    }
}
/*
2
2
1 2 L 1 3 R
2
1 2 L 1 3 R
2
1 2 L 1 3 R
2
1 3 L 1 2 R
*/

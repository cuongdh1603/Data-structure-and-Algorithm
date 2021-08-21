#include<bits/stdc++.h>
using namespace std;
int check1,check2;
vector<int> level;
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
    check1 = check2 = 1;
    level.clear();
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
void traverse(Node* root){
    if(!root) return;
    if((!root->left&&root->right)||(root->left&&!root->right)){
        check1 = 0;
        return;
    }
    //if(!root->left&&!root->right) level.push_back(lev);
    if(root->left) traverse(root->left);
    if(root->right) traverse(root->right);
}
void traverseBfs(Node* root){
    typedef pair<Node*,int> ii;
    deque<ii> dq;
    dq.push_back({root,0});
    while(dq.size()){
        Node *t = dq.front().first;
        int lv = dq.front().second;
        //ans.push_back(u.first->val);
        dq.pop_front();
        //int exit = 0;
        if(!t->left&&!t->right) level.push_back(lv);
        if(t->left) dq.push_back({t->left,lv+1});
        if(t->right) dq.push_back({t->right,lv+1});
        //if(!u.first->left&&!u.first->right)
        //level.push_back(u.second);
    }
}

void result(){
    if(check1){
        for(int i=1;i<level.size();i++)
        if(level[i]!=level[i-1]){
            check2 = 0;
            break;
        }
    }
    if(check1&&check2) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}

bool checkLeafNode(Node* root,int level,int &leafLevel){
    if(!root) return true;
    if(!root->left&&!root->right){
        if(!leafLevel){
            leafLevel = level;
            return true;
        }
        return  level == leafLevel;
    }
    return (checkLeafNode(root->left,level+1,leafLevel)&&checkLeafNode(root->right,level+1,leafLevel));
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Node* root = nullptr;
        init(root);
        int lev = 0;
        traverse(root);
        //
        if(check1){
            //int leafLevel;
            //if(!checkLeafNode(root,0,leafLevel)) check2 = 0;
            traverseBfs(root);
            //cout<<level.size()<<endl;
        }

        //if(check1&&check2) cout<<"Yes";
        //else cout<<"No";
        //cout<<endl;
        result();
    }
}
/*
3
6
10 20 L 10 30 R 20 40 L 20 50 R 30 60 L 30 70 R
2
18 15 L 18 30 R
5
1 2 L 2 4 R 1 3 R 3 5 L 3 6 R
*/

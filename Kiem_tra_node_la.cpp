#include<bits/stdc++.h>
#define mxn 1003
using namespace std;
int n,top;
struct Node{
    int l;
    int r;
};
Node node[mxn];
vector<int> ans;
void init(){
    //dt.resize(n);
    ans.clear();
    for(int i=0;i<mxn;i++) node[i].l = node[i].r = -1;
    int p,c;
    string s;
    for(int i=0;i<n;i++){
        cin>>p>>c>>s;
        if(i==0) top = p;
        if(s=="L") node[p].l = c;
        else node[p].r = c;
    }
}
void traverse(int parent,int level){
    if(node[parent].l<0&&node[parent].r<0){
        ans.push_back(level);
        return;
    }
    else{
        if(node[parent].l>0) traverse(node[parent].l,level+1);
        if(node[parent].r>0) traverse(node[parent].r,level+1);
    }
}
void result(){
    int d = 1;
    for(int i=1;i<ans.size();i++){
        if(ans[i]!=ans[i-1]){
            d = 0;
            break;
        }
    }
    cout<<d<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        init();
        traverse(top,0);
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

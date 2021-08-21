#include<bits/stdc++.h>
using namespace std;
string s;
struct Node{
    char c;
    Node *left,*right;
};
Node* newNode(char c){
    Node *tmp = new Node;
    tmp->c = c;
    tmp->left = tmp->right = nullptr;
    return tmp;
}
bool isOperator(char c){
    return (c=='+'||c=='-'||c=='*'||c=='/'||c=='^');
}
Node* build(){
    stack<Node*> st;
    Node *anc,*des1,*des2;
    for(int i=0;i<s.size();i++){
        if(!isOperator(s[i])){
            anc = newNode(s[i]);
            st.push(anc);
        }
        else{
            des2 = st.top();
            st.pop();
            des1 = st.top();
            st.pop();
            anc = newNode(s[i]);
            anc->left = des1;
            anc->right = des2;
            st.push(anc);
        }
    }
    return st.top();
}
void print(Node *ans){
    if(ans){
        print(ans->left);
        cout<<ans->c;
        print(ans->right);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        Node* ans = build();
        print(ans);
        cout<<endl;
    }
}
/*
2
ab+ef*g*-
wlrb+-*
*/

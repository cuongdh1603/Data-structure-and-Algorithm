#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    deque<int> q;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSH"){
            int x;
            cin>>x;
            q.push_back(x);
        }
        else if(s=="PRINTFRONT"){
            if(q.size()) cout<<q.front();
            else cout<<"NONE";
            cout<<endl;
        }
        else if(s=="POP")
            if(q.size()) q.pop_front();
    }
}


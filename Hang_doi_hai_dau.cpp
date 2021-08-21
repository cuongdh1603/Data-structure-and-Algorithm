#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    deque<int> q;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s=="PUSHFRONT"){
            int x;
            cin>>x;
            q.push_front(x);
        }
        else if(s=="PRINTFRONT"){
            if(q.size()) cout<<q.front();
            else cout<<"NONE";
            cout<<endl;
        }
        else if(s=="POPFRONT"){
             if(q.size()) q.pop_front();
        }
        else if(s=="PUSHBACK"){
             int x;
            cin>>x;
            q.push_back(x);
        }
        else if(s=="PRINTBACK"){
            if(q.size()) cout<<q.back();
            else cout<<"NONE";
            cout<<endl;
        }
        else if(s=="POPBACK"){
            if(q.size()) q.pop_back();
        }
    }
}



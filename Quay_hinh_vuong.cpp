#include<bits/stdc++.h>
#define ll long long 
using namespace std;
typedef pair<string,ll> sl;
string model;
string turn_left(string s){
    return {s[3],s[0],s[2],s[4],s[1],s[5]};
}
string turn_right(string s){
    return {s[0],s[4],s[1],s[3],s[5],s[2]};
}
ll solve(string s){
    set<string> check;
    deque<sl> dq;
    dq.push_back({s,0});
    while (dq.size())
    {
        sl u = dq.front();
        dq.pop_front();
        string str = u.first;
        if(str==model) return u.second;
        string rs1 = turn_left(str),rs2 = turn_right(str);
        if(rs1==model) return u.second+1;
        if(rs2==model) return u.second+1;
        if(check.find(rs1)==check.end()){
            dq.push_back({rs1,u.second+1});
            check.insert(rs1);
        }
        if(check.find(rs2)==check.end()){
            dq.push_back({rs2,u.second+1});
            check.insert(rs2);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s = "",rs;
        for(int i=0;i<6;i++){
            cin>>rs;
            s += rs;
        }
        for(int i=0;i<6;i++){
            cin>>rs;
            s += rs;
        }
        for(int i=0;i<6;i++){
            cin>>rs;
            model += rs;
        }
        cout<<solve(s)<<endl;
    }
}

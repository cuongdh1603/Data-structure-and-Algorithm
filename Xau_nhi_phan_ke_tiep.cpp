#include<bits/stdc++.h>
using namespace std;
int n;
vector<vector<int> > G;
int toNum(string s){
    int ans = 0;
    for(int i=0;i<s.size();i++){
        ans *= 10;
        ans += s[i] - '0';
    }
    return ans;
}
int main(){
    cin>>n;
    cin.ignore();
    G.resize(n+1);
    string s,s1;
    for(int i=1;i<=n;i++){
        getline(cin,s);
        stringstream ss(s);
        vector<int> v;
        while(ss>>s1){
            G[i].push_back(toNum(s1));
        }
    }
    map<pair<int,int>,int> mp;
    for(int i=1;i<=n;i++){
        if(G[i].size()){
            for(int j=0;j<G[i].size();j++){
                int x = i;
                int y = G[i][j];
                if(x>y) swap(x,y);
                mp[{x,y}]++;
            }
        }
    }
    for(auto [x,y]:mp) cout<<x.first<<' '<<x.second<<endl;
}

#include<bits/stdc++.h>
#define ll long long
#define mxn 503
using namespace std;
int n,m,a[mxn][mxn];
/*
struct data{
    int x;
    int y;
    int dt;
};
*/
typedef pair<int,int> ii;
map<ii,ll> mp;
int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};
void init(){
    cin>>n>>m;
    mp.clear();
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            mp[{i,j}] = INT_MAX;
        }
}
bool inMatrix(int x,int y){
    return (x>0&&x<=n&&y>0&&y<=m);
}
void solve(){
    set<ii> st;
    st.insert({1,1});
    mp[{1,1}] = a[1][1];
    while(st.size()){
        ii k = *st.begin();
        st.erase(k);
        //int x = k.first;
        //int y = k.second;
        //if(inMatrix(x,y))
        for(int i=0;i<4;i++){
            int x = k.first + dx[i];
            int y = k.second + dy[i];
            if(inMatrix(x,y)){
                if(mp[{x,y}]>mp[{k.first,k.second}]+a[x][y]){
                    //if(mp[{x,y}]!=INT_MAX) st.erase({x,y});
                    mp[{x,y}] = mp[{k.first,k.second}]+a[x][y];
                    st.insert({x,y});
                }
            }
        }
    }
    cout<<mp[{n,m}]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        init();
        solve();
    }
}
/*
3

4
5
0 3 1 2 9
7 3 4 9 9
1 7 5 5 3
2 3 4 2 5

1
6
0 1 2 3 4 5

5 5
1 1 1 9 9
9 9 1 9 9
1 1 1 9 9
1 9 9 9 9
1 1 1 1 1

5 5
31 100 65 12 18
10 13 47 157 6
100 113 174 11 33
88 124 41 20 140
99 32 111 41 20
*/

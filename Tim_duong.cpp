#include<bits/stdc++.h>//created by DO HUNG CUONG(dhc1603)
#define ll long long
#define ld long double
#define faster ios_base::sync_with_stdio(false);    \
    cin.tie(0);                                     \
    cout.tie(0);
#define vi vector<int>
#define vl vector<ll>
#define sz(x) ((int)(x).size())
#define bg begin()
#define ed end()
#define all(x) (x).bg,(x).ed
#define pb push_back
#define minv(a) *min_element(a.bg,a.ed)
#define maxv(a) *max_element(a.bg,a.ed)
#define pii pair<int,int>
#define pli pair<ll,int>
#define rep(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
template<typename T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<typename T> using maxpq = priority_queue<T,vector<T>,less<T>>;
const int N = 300005;
const ll mod = 1e9+7;
const ll inf = 1e18+7;
const int mxn = 503;
int n,m,rS,cS,rT,cT;
char s[mxn][mxn];
int dd[mxn][mxn];
void input(){
    cin>>n>>m;
    rep(i,1,n+1)
    rep(j,1,m+1){
        cin>>s[i][j];
        if(s[i][j]=='S') rS = i,cS = j;
        if(s[i][j]=='T') rT = i,cT = j;
    }
}
bool Move(){
    memset(dd,-1,sizeof(dd));
    queue<pii> q;
    q.push({rS,cS});
    dd[rS][cS] = 0;
    while(q.size()){
        pii u = q.front();
        q.pop();
        int r=u.first,c=u.second;
        if(dd[r][c]>3) return false;
        if(r==rT&&c==cT) return true;
        int v = dd[r][c]+1;
        for(int i=c+1;i<=m&&s[r][i]!='*';i++) if(dd[r][i]==-1){dd[r][i] = v;q.push({r,i});} else break;
        for(int i=c-1;i>0&&s[r][i]!='*';i--) if(dd[r][i]==-1){dd[r][i] = v;q.push({r,i});} else break;
        for(int i=r+1;i<=n&&s[i][c]!='*';i++) if(dd[i][c]==-1){dd[i][c] = v;q.push({i,c});} else break;
        for(int i=r-1;i>0&&s[i][c]!='*';i--) if(dd[i][c]==-1){dd[i][c] = v;q.push({i,c});} else break;
    }
}
void solve(){
    cout<<(Move()?"YES":"NO")<<endl;
}
int main(){
    faster;
    int test = 1;
    cin>>test;
    while(test--){
        input();
        solve();
    }
}
/*
2

5 5
..S..
****.
T....
****.
.....

5 5
S....
****.
.....
.****
..T..
*/

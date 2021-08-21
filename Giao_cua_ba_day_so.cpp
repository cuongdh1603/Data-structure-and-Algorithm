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
#define nrep(i,b,a) for(int i=(b);i>=(a);i--)
using namespace std;
template<typename T> using minpq = priority_queue<T,vector<T>,greater<T>>;
template<typename T> using maxpq = priority_queue<T,vector<T>,less<T>>;
const int N = 300005;
const ll mod = 1e9+7;
const ll inf = 1e18+7;
const int mxn = 1003;
ll da,db,dc;
vl a,b,c;
void Input(){
    cin>>da>>db>>dc;
    a.resize(da);
    b.resize(db);
    c.resize(dc);
    rep(i,0,da) cin>>a[i];
    rep(i,0,db) cin>>b[i];
    rep(i,0,dc) cin>>c[i];
}
void Solve(){
    ll pa=0,pb=0,pc=0,check = 0;
    while(pa<da&&pb<db&&pc<dc){
        ll ans = min(a[pa],min(b[pb],c[pc]));
        if(ans == a[pa]&&ans == b[pb]&&ans == c[pc])
            cout<<ans<<' ',check = 1,pa++,pb++,pc++;
        else{
            if(ans==a[pa]) pa++;
            if(ans==b[pb]) pb++;
            if(ans==c[pc]) pc++;
        }
    }
    if(!check) cout<<-1;
    cout<<endl;
}
int main(){
    faster;
    int test = 1;
    cin>>test;
    while(test--){
        Input();
        Solve();
    }
}
/*
3

6 5 8

1 5 10 20 40 80

5 7 20 80 100

3 4 15 20 30 70 80 120

3 5 4

1 5 5

3 4 5 5 10

5 5 10 20

3 3 3

1 2 3

4 5 6

7 8 9
*/

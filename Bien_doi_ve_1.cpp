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
void Input(){

}
void Solve(){
    ll n;
    cin>>n;
    deque<pli> dq;
    dq.pb({n,0});
    while(sz(dq)){
        pli u = dq.front();
        dq.pop_front();
        if(u.first==1){
            cout<<u.second;
            break;
        }
        if(u.first%3==0){
            if(u.first/3==1){
                cout<<u.second+1;
                break;
            }
            else dq.pb({u.first/3,u.second+1});
        }
        if(u.first%2==0){
            if(u.first/2==1){
                cout<<u.second+1;
                break;
            }
            else dq.pb({u.first/2,u.second+1});
        }
        if(u.first-1==1){
                cout<<u.second+1;
                break;
            }
        else dq.pb({u.first-1,u.second+1});
    }
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


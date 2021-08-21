//please do it by myself!!!
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
int n;
string s;
void Input(){
    cin>>n>>s;
}
void Solve(){
    int g = 0,w = 0,r = 0,ans = 0;
    for(int i=0;i<n;i++)
        if(s[i]=='X') g++;
        else if(s[i]=='T') w++;
        else if(s[i]=='D') r++;
    for(int i=0;i<g;i++){
        if(s[i]=='T'){
            for(int j=g;j<n;j++){
                if(s[j]=='X'){
                    swap(s[i],s[j]);
                    ans++;
                    break;
                }
            }
        }
        else if(s[i]=='D'){
            for(int j=n-1;j>=g;j--){
                if(s[j]=='X'){
                    swap(s[i],s[j]);
                    ans++;
                    break;
                }
            }
        }
    }
    for(int i=g;i<g+w;i++){
        if(s[i]=='D'){
            for(int j=n-1;j>=g+w;j--){
                if(s[j]=='T'){
                    swap(s[i],s[j]);
                    ans++;
                    break;
                }
            }
        }
    }
     cout<<ans;
}
int main(){
    faster;
    int test = 1;
    //cin>>test;
    while(test--){
        Input();
        Solve();
    }
}
/*
9

TTXDDDTDX
*/

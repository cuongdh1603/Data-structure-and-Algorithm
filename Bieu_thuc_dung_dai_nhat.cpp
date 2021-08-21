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
    string s;
    cin>>s;
    stack<char> sk;
    rep(i,0,sz(s)){
        if(s[i]=='(') sk.push(s[i]);
        else
            if(sz(sk)&&sk.top()=='('){
                    sk.pop();
            }
            else{
                sk.push(s[i]);
            }
    }
    cout<<sz(s)-sz(sk)<<endl;
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


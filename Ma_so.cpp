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
int n,arr[10] = {0};
vector<string> ans,num,cha;
void genNum(string d,int step){
    if(step==n){
        num.pb(d);
        return;
    }
    else{
        rep(i,1,n+1)
            genNum(d + char(i + '0'),step+1);
    }
}
int kt(int *arr,int val,int n){
	rep(i,1,n+1)
		if(val == arr[i])
		return 0;
	return 1;
}
void genCha(int *arr,int x,int n){
	if(x==n){
        string rs = "";
		rep(i,1,n+1)
		rs += char(arr[i]+64);
		cha.pb(rs);
		return;
	}
	rep(i,1,n+1){
			if(kt(arr,i,x)){
				arr[x+1] = i;
				genCha(arr,x+1,n);
			}
		}
}
void Input(){
    cin>>n;
    genNum("",0);
    genCha(arr,0,n);
}
void Solve(){
    rep(i,0,sz(cha))
    rep(j,0,sz(num))
    cout<<(cha[i]+num[j])<<endl;
    //sort(all(ans));
    //rep(i,0,sz(ans)) cout<<ans[i]<<endl;
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


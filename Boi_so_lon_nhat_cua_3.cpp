#include <bits/stdc++.h>
using namespace std;
#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;
const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

int a[100000],n;

void solve(){
	int cnt[10]={0};
	for(int i=0;i<n;i++){
		cnt[a[i]]++;
	}
	int cnt1 = cnt[4]+cnt[7]+cnt[1];
	int cnt2 = cnt[2]+cnt[8]+cnt[5];
	int r = (cnt1 + cnt2*2)%3;
	if(r==1){
		if(cnt1>=1) --cnt1;
		else cnt2-=2;
	}
	if(r==2){
		if(cnt2>=1) --cnt2;
		else cnt1-=2 ;
	}
	string res="";
	for(int i=9;i>=0;i--){
		if(i%3==0){
			while(cnt[i]>0){
				res+=(char)(i+'0');
				cnt[i]--;
			}
		}
		else if(i%3==1){
			while(cnt[i]>0 && cnt1>0){
				res+=(char)(i+'0');
				cnt[i]--;cnt1--;
			}
		}
		else if(i%3==2){
			while(cnt[i]>0 && cnt2>0){
				res+=(char)(i+'0');
				cnt[i]--;cnt2--;
			}
		}
	}
	if(res.size()==0){
		cout<<"-1\n";
	}
	else if(res.size()>0 && res[0]=='0'){
		cout<<"0\n";
	}
	else{
		cout<<res<<"\n";
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		FOR(i,0,n) cin>>a[i];
		solve();
	}
}


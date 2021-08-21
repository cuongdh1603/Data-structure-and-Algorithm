//please do by myself!!!
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
    vl a;
    a.resize(n);
    rep(i,0,n) cin>>a[i];
    sort(all(a));
    cout<<max(a[0]*a[1],max(a[n-1]*a[n-2],max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3])))<<endl;
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
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    ll maxr3, maxr2, maxl2, maxl3;
    ll res = INT_MIN;

    maxr2 = arr[n - 1] * arr[n - 2];
    maxl2 = arr[0] * arr[1];
    maxr3 = maxr2 * arr[n - 3];
    maxl3 = maxl2 * arr[n - 1];
    res = max(max(max(maxl2, maxl3), maxr2), maxr3);
    cout << res;

    return 0;
}
*/

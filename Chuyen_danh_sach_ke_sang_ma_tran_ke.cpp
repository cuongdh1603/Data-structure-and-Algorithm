#include<bits/stdc++.h>
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
int a[mxn][mxn];
int strToNum(string s){
    int num = 0;
    rep(i,0,sz(s)) num = num*10 +(s[i]-'0');
    return num;
}
void Input(){

}
void Solve(){
    int n;
    cin>>n;
    cin.ignore();
    rep(i,1,n+1){
        string str,rs;
        getline(cin,str);
        stringstream ss(str);
        while(ss>>rs){
            a[i][strToNum(rs)] = 1;
        }
    }
    rep(i,1,n+1){
        rep(j,1,n+1) cout<<a[i][j]<<' ';
        cout<<endl;
    }
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
3
2 3
1 3
1 2
*/


















/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    vector<int> adj[1001];
    for (int i = 0; i < n; i++)
    {
        string s;
        getline(cin, s);
        s += " ";
        int num = 0;

        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] >= '0' && s[j] <= '9')
                num = num * 10 + s[j] - 48;
            else if (num > 0)
            {
                adj[i + 1].push_back(num);
                num = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end());

    bool matrix[1001][1001] = {};
    for (int i = 1; i <= n; i++)
        for (auto j : adj[i])
            matrix[i][j] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << matrix[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
*/

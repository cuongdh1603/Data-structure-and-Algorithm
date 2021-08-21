#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define endl      <<endl
#define pii       pair<int, int>
#define MIN       INT_MIN
#define MAX       LLONG_MAX

#define er              erase
#define pb              push_back
#define eleV            vector <ele>
#define all(vec)        vec.begin(), vec.end()
#define rs(A,x)         memset(A, x, sizeof(A))
#define Unique(C)       C.erase(unique(C.begin(), C.end()), C.end())
#define pq(x)           priority_queue<x>
#define neg_pq(x)       priority_queue<x, vector<x>, greater<x>>

#define FOR(i, m, n)    for(int i = m; i < n; ++i)
#define FORx(i,m,n,x)   for(int i = m; i < n; i += x)
#define FORD(i, m, n)   for(int i = m; i >= n; --i)
#define get(C,a)        FOR(i, 0, a) cin >> C[i]
#define print(C,a)      FOR(i, 0, a) cout << C[i]
#define faster()        cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()           int t; cin >> t; while (t--)


ll a[101][10], u = 1e9 + 7;
ll td(int tm, int num)
{
    if (a[tm][num])
        return a[tm][num];

    FOR(i, 0, num + 1)
        a[tm][num] = (a[tm][num] + td(tm - 1, i)) % u;

    return a[tm][num];
}

int main ()
{
    faster();
    FOR(i, 0, 10) a[1][i] = 1;
    run()
    {
        int n; ll res = 0;
        cin >> n;

        FOR(i, 0, 10)
            res = (res + td(n, i)) % u;
        cout << res endl;
    }
}

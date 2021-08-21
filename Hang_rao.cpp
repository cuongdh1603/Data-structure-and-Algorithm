//please do it by myself!!!


#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define pii       pair<int, int>
#define MIN       INT_MIN
#define MAX       LLONG_MAX

#define res(x)          resize(x)
#define sz()            size()
#define er              erase
#define pb              push_back
#define eleV            vector <ele>
#define all(vec)        vec.begin(), vec.end()
#define rs(A,x)         memset(A, x, sizeof(A))
#define Unique(C)       C.erase(unique(C.begin(), C.end()), C.end())
#define pq(x)           priority_queue<x>
#define neg_pq(x)       priority_queue<x, vector<x>, greater<x>>
#define vec2(C,x,y,tp)  vector<vector<tp> > C(x, vector<tp> (y, 0))

#define FOR(i, m, n)    for(int i = m; i < n; ++i)
#define FORx(i,m,n,x)   for(int i = m; i < n; i += x)
#define FORD(i, m, n)   for(int i = m; i >= n; --i)
#define get(C,a)        FOR(i, 0, a) cin >> C[i]
#define print(C,a)      FOR(i, 0, a) cout << C[i]

const int inf = 1 << 30;
int x[3010], y[3010], t[3010];
int xz, yz, gz, n, m, z;
char arr[6010][6010];
int mx[4] = {-1, 0, 1, 0},
    my[4] = {0, -1, 0, 1};
stack<short> sx, sy;
void reset()
{
    memset(arr, '.', sizeof(arr));
    rs(x, 0);
    rs(y, 0);
    rs(t, 0);
    while (!sx.empty())
        sx.pop();
    while (!sy.empty())
        sy.pop();
}

void getip()
{
    cin >> n >> m;
    reset();
    z = 0;
    x[z] = y[z] = -inf; z++;
    x[z] = y[z] =  inf; z++;

    FOR(i, 0, 2 * n)
    {
        cin >> x[z] >> y[z];
        z++;
    }
    FOR(i, 0, m)
    {
        cin >> x[z] >> y[z];
        z++;
    }
}




int compress(int a[3010], int z)
{
    memcpy(t, a, sizeof(t));
    sort(t, t + z);

    int nz = unique(t, t + z) - t;
    FOR(i, 0, z)
        a[i] = (lower_bound(t, t + nz, a[i]) - t) * 2;

    return nz * 2;
}

void put(int x, int y)
{
    if (x < 0 || x >= xz || y < 0 || y >= yz) return;
    if (arr[x][y] == 'X') return;
    gz += (arr[x][y] == 'C');
    arr[x][y] = 'X';
    sx.push(x);
    sy.push(y);
}

void dfs(int startx, int starty)
{
    put(startx, starty);
    while (sx.size())
    {
        int x = sx.top(); sx.pop();
        int y = sy.top(); sy.pop();
        FOR(i, 0, 4)
        {
            int nx = x + mx[i];
            int ny = y + my[i];
            put(nx, ny);
        }
    }
}

void solve()
{
    xz = compress(x, z);
    yz = compress(y, z);

    FOR(i, 0, n)
    {
        int a = i * 2 + 2;
        int b = i * 2 + 3;
        int x1 = x[a], y1 = y[a], x2 = x[b], y2 = y[b];
        if (x1 == x2)
        {
            if (y1 > y2) swap(y1, y2);
            while (y1 <= y2)
            {
                arr[x1][y1] = 'X';
                y1++;
            }
        }
        else
        {
            if (x1 > x2) swap(x1, x2);
            while (x1 <= x2)
            {
                arr[x1][y1] = 'X';
                x1++;
            }
        }
    }

    FOR(i, 0, m)
    {
        int a = i + 2 * n + 2;
        arr[x[a]][y[a]] = 'C';
    }

    int ans = 0;
    FOR(i, 0, m)
    {
        int a = i + 2 * n + 2;
        gz = 0;
        dfs(x[a], y[a]);
        ans = max(ans, gz);
    }

    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        getip();
        solve();
    }
}




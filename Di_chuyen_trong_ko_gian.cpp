#include <bits/stdc++.h>
using namespace std;

int T;
int n, m, k;
const int mx[6] = {1, -1, 0, 0, 0, 0};
const int my[6] = {0, 0, 1, -1, 0, 0};
const int mz[6] = {0, 0, 0, 0, 1, -1};

struct point {
    int x;
    int y;
    int z;
    int step;
};

bool isSafe(char ***a, point t) {
    return (t.x >= 0 && t.x < n &&
            t.y >= 0 && t.y < m &&
            t.z >= 0 && t.z < k &&
            a[t.z][t.x][t.y] == '.');
}

bool isOne(point u, point v) {
    return (u.x == v.x && u.y == v.y && u.z == v.z);
}

int BFS(char ***a, point start, point target) {
    queue<point> q;
    q.push(start);
    while (!q.empty()) {
        point u = q.front();
        q.pop();
        if (isOne(u, target)) return u.step;
        for (int i = 0; i < 6; i++) {
            point t = {u.x + mx[i], u.y + my[i], u.z + mz[i], u.step + 1};
            if (isOne(t, target)) return t.step;
            if (isSafe(a, t)) {
                a[t.z][t.x][t.y] = 'x'; //visited
                q.push(t);
            }
        }
    }
    return -1;
}

void solve() {
    cin >> T;
    while (T--) {
        cin >> k >> n >> m;
        char ***a = new char **[k + 5];
        point end, start;
        char c;
        for (int h = 0; h < k; h++) {
            a[h] = new char *[n + 5];
            for (int i = 0; i < n; i++) {
                a[h][i] = new char[m + 5];
                for (int j = 0; j < m; j++) {
                    cin >> c;
                    if (c == 'E') {
                        end = {i, j, h, 0};
                        a[h][i][j] = '.';
                    } else
                        a[h][i][j] = c;
                    if (c == 'S')
                        start = {i, j, h, 0};
                }
            }
        }
        cout << BFS(a, start, end) << '\n';
    }
}

int main() {
    solve();
}

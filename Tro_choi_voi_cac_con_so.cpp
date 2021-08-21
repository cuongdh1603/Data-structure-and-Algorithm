//please do it by myself!!!
/*
#include <bits/stdc++.h>
using namespace std;

int T;

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[n + 5];
        for (int i = 1; i <= n; ++i) {
            a[i] = i;
        }
        do {
            bool ok = 1;
            for (int i = 1; i < n && ok; ++i) {
                if (a[i] == a[i + 1] + 1 || a[i] == a[i + 1] - 1) ok = 0;
            }
            if(!ok) continue;
            for (int i = 1; i <= n; ++i) cout << a[i];
            cout << '\n';
        } while (next_permutation(a + 1, a + n + 1));
        cout << endl;
    }
}

int main() {
    solve();
}
*/

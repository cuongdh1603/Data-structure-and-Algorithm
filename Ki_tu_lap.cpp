//please do it by myself!!!
#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<SHRT_MAX;
}

#include <bits/stdc++.h>
using namespace std;

int T;

int countPairs(string s1, string s2) {
    int freq1[26] = {0};
    int freq2[26] = {0};
    int i, count = 0;
    for (i = 0; i < s1.length(); i++)
        freq1[s1[i] - 'A']++;
    for (i = 0; i < s2.length(); i++)
        freq2[s2[i] - 'A']++;
    for (i = 0; i < 26; i++)
        count += (min(freq1[i], freq2[i]));
    return count;
}

void solve() {
    T = 1;
    // cin >> T;
    while (T--) {
        int n;
        cin >> n;//nhập số n
        string s[n];
        int a[n];
        int common[n][n];
        for (int i = 0; i < n; ++i) {
            cin >> s[i];
            a[i] = i;
        }
        int mincnt = SHRT_MAX;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i == j) common[i][j] = SHRT_MAX;
                else common[i][j] = countPairs(s[i], s[j]);
            }
        }
        do {
            int cnt = 0;
            for (int i = 0; i < n - 1; ++i)
                cnt += common[a[i]][a[i+1]];
            mincnt = min(cnt, mincnt);
        } while (next_permutation(a, a + n));
        cout << mincnt << "\n";
    }
}

int main() {
    solve();
}
*/

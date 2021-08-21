#include <bits/stdc++.h>
using namespace std;

int T;

int dp[15][15];
bool v[15][15];
int sum = 0;

void findSum(int arr[], int n) {
    for (int i = 0; i < n; i++)
        sum += arr[i];
}

int cntWays(int arr[], int i, int ck,
            int k, int n, int curr_sum) {
    if (sum % k != 0)
        return 0;
    if (i != n and ck == k + 1)
        return 0;
    if (i == n) {
        if (ck == k + 1)
            return 1;
        else
            return 0;
    }
    if (v[i][ck])
        return dp[i][ck];
    curr_sum += arr[i];
    v[i][ck] = 1;
    dp[i][ck] = cntWays(arr, i + 1, ck, k, n, curr_sum);
    if (curr_sum == (sum / k) * ck)
        dp[i][ck] += cntWays(arr, i + 1, ck + 1, k, n, curr_sum);
    return dp[i][ck];
}

void solve() {
    T = 1;
    // cin >> T;
    while (T--) {
        sum = 0;
        memset(dp, 0, sizeof(dp));
        memset(v, 0, sizeof(v));

        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        findSum(arr, n);
        cout << cntWays(arr, 0, 1, k, n, 0) << "\n";
    }
}

int main() {
    solve();
}

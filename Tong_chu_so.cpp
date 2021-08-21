#include <bits/stdc++.h>
using namespace std;

int dp[101][1001];

int minNum(int a, int b)
{
	if (a > b || a < 0 || b < 0
        || a > 100 || b > 10000)
		return -1;

	if (a == 0 && b == 0)
		return 0;

	if (dp[a][b] != -1)
		return dp[a][b];

	int res = 101;

	for (int i = 9; i >= 1; i--) {

		int k = minNum(a - i, b - (i * i));

		if (k != -1)
			res = min(res, k + 1);
	}

	return dp[a][b] = res;
}

void out(int a, int b)
{

	memset(dp, -1, sizeof(dp));
	dp[0][0] = 0;

	int k = minNum(a, b);

	if (k == -1 || k > 100)
		cout << "-1";
	else
    {
		while (a > 0 && b > 0)
		{
			for (int i = 1; i <= 9; i++)
			{
				if (a >= i && b >= i * i &&
					1 + dp[a - i][b - i * i] == dp[a][b])
                {
					cout << i;
					a -= i;
					b -= i * i;
					break;
				}
			}
		}
	}
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        out(a,b);
        cout << endl;
    }
}

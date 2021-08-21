#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int t;
	cin>>t;
    while(t--){
		int n; cin>>n;
	    int l[n+1],r[n+1];

        ll a[n+1];
        for (int i=1; i<=n; i++) cin >> a[i];

        vector<int> q;
        // Tính l
        a[0]=1e9;
        q.push_back(0);
        for (int i=1; i<=n; i++) {
            while (!q.empty() && a[q.back()] >= a[i]) q.pop_back();

            if (q.empty()) l[i] = 0;
            else l[i] = q.back();

            q.push_back(i);
        }
//		l1=0 l2=0 l3=2 l4=2 l5=4 l6=0 l7=6
        // Tính r
        q.clear();
        a[n+1]=1e9;
        q.push_back(n+1);
        for (int i=n; i>=1; i--) {
            while (!q.empty() && a[q.back()] >= a[i]) q.pop_back();

            if (q.empty()) r[i] = n+1;
            else r[i] = q.back();

            q.push_back(i);
        }


		ll ans=0;
		for(int i=1; i<=n; i++)
			if (r[i]-l[i]-1 >= a[i])
				ans=max(ans,a[i]);

		cout<<ans<<endl;
    }
    return 0;
}

#include<bits/stdc++.h>
    #define ll long long
// test

    #define run_test() int t;cin>>t;while(t--)
    #define faster() ios_base::sync_with_stdio(0);cin.tie(0);

// acronym
    #define pob pop_back
    #define EL printf("\n")
    #define pb push_back
    #define FOR(i,l,r) for (int i=l;i<=r;i++)
    #define FORD(i,r,l) for (int i=r;i>=l;i--)

    using namespace std;

/*------------------------------------------------------------------------*/

ll n,sum;
bool test(ll a[]){
    ll sum_curr = 0, Start=0;
    FOR(i,0,n-1){
        sum_curr+=a[i];
        while(sum_curr > sum && Start < i) {
            sum_curr-=a[Start];
            Start++;
        }
        if(sum_curr==sum){
            return true;
        }
    }
    return false;
}
main () {
    faster()
    run_test(){

        cin >> n >> sum;
        ll a[n];
        FOR(i, 0, n-1){
            cin >> a[i];
        }
        test(a) == false ? cout << "NO\n":cout<<"YES\n";
    }
    return 0;
}

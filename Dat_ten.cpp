//please do it by myself!!!
#include<bits/stdc++.h>//create by DO HUNG CUONG 1603
#define ll long long
#define N 10005
using namespace std;
int n,k;
vector<int> vt;
void in(){
    for(int i=1;i<=k;i++) cout<<char(vt[i]+64);
    cout<<endl;
}
void solve(int step){
    for(int i = vt[step-1]+1;i<=n-k+step;i++){
        vt[step] = i;
        if(step==k){
            in();
        }
        else solve(step+1);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vt.clear();
        vt.resize(k+1);
        vt[0] = 0;
        solve(1);
        cout<<endl;
    }
}

/*























#include <bits/stdc++.h>
using namespace std;
int arr[16] = {};

void print(int n)
{
    for (int i = 1; i <= n; i++)
        cout << char(arr[i] + 64);
    cout << '\n';
}
void create(int i, int n, int k)
{
    for (int j = arr[i - 1] + 1; j <= n - k + i; j++)
    {
        arr[i] = j;
        if (i == k)
            print(k);
        else
            create(i + 1, n, k);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        create(1, n, k);
        cout << '\n';
    }
    return 0;
}
*/

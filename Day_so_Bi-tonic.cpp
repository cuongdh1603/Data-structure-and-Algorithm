#include<bits/stdc++.h>
using namespace std;
vector<int> a,ia,da;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        a.resize(n);
        da.resize(n);
        ia.resize(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            da[i] = ia[i] = a[i];
        }
        for(int i=1;i<n;i++){
            int sum = 0;
            for(int j=i-1;j>=0;j--)
                if(a[i]>a[j]) sum = max(sum,ia[j]);
            ia[i] += sum;
        }
        for(int i=n-2;i>=0;i--){
            int sum = 0;
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j]) sum = max(sum,da[j]);
            da[i] += sum;
        }
        int ans = 0;
        for(int i=0;i<n;i++)
            ans = max(ans,da[i]+ia[i]-a[i]);
        cout<<ans<<endl;
    }
}

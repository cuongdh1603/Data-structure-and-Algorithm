#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<int> a;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        a.resize(k+1);
        set<int> st;
        for(int i=1;i<=k;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        int c = 0;
        for(int i=k;i>0;i--){
            if(a[i]<n-k+i){
                a[i]++;
                c = 1;
                for(int j=i+1;j<=k;j++)
                    a[j] = a[i] + j - i;
                break;
            }
        }
        if(!c) cout<<k;
        else{
            int ans = 0;
            for(int i=1;i<=k;i++)
                if(st.find(a[i])==st.end())
                ans++;
            cout<<ans;
        }
        cout<<endl;
    }
}

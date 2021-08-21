#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a,check;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        a.resize(n);
        int sum = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        int d = 0;
        if(sum%2==0){
            d = 1;
            sum/=2;
            check.resize(sum+1,0);
            check[0] = 1;
            for(int i=0;i<n;i++){
                for(int j=sum;j>=a[i];j--)
                    if(check[j]==0&&check[j-a[i]]) check[j] = 1;
            }
        }
        if(!d||!check[sum]) cout<<"NO";
        else cout<<"YES";
        cout<<endl;
    }
}

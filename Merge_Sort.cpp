#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> a;
void mergeTwoArray(int l,int r,int m){
    vector<int> left_arr,right_arr;
    int len1 = m-l+1,len2 = r-m;
    for(int i=0;i<len1;i++) left_arr.push_back(a[l+i]);
    for(int i=0;i<len2;i++) right_arr.push_back(a[m+i+1]);
    int i=0,j=0,k=l;
    while(i<len1&&j<len2){
        if(left_arr[i]<right_arr[j]){
            a[k++] = left_arr[i++];
        }
        else{
            a[k++] = right_arr[j++];
        }
    }
    while(i<len1) a[k++] = left_arr[i++];
    while(j<len2) a[k++] = right_arr[j++];

}
void merge_sort(int l,int r){
    if(l<r){
        int m = (l+r)/2;
        merge_sort(l,m);
        merge_sort(m+1,r);
        mergeTwoArray(l,r,m);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        a.resize(n);
        for(auto &i:a) cin>>i;
        merge_sort(0,n-1);
        for(auto i:a) cout<<i<<' ';
        cout<<endl;
    }
}



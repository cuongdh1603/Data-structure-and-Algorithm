#include<bits/stdc++.h>
using namespace std;
int n,a[50]={0};
int kt(int *a,int val,int n){
	for(int i = 1;i<=n;i++){
		if(val == a[i])
		return 0;
	}
	return 1;
}
void Try(int *a,int x,int n){
	if(x==n){
		for(int i=1;i<=n;i++)
		cout<<a[i];
		cout<<' ';
		return ;
	}
	for(int i=1;i<=n;i++){
			if(kt(a,i,x)){
				a[x+1] = i;
				Try(a,x+1,n);
			}
		}
}
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(a,0,sizeof(a));
        cin>>n;
        Try(a,0,n);
        cout<<endl;
    }
}

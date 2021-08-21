#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<string> str(n);
    for(int i=0;i<n;i++) cin>>str[i];
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
        if(str[i]!=s) cout<<str[i]<<' ';
}




































/*
#include<bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin,s);
	int k;cin>>k;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]-'0'!=k) cout<<s[i];

	}
}
*/

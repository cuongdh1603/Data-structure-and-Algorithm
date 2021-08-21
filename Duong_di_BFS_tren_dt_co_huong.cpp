//please do it by myself!!!
#include<bits/stdc++.h>
using namespace std;
int v,e,s,t,d;
vector<vector<int>> G;
vector<bool> check;
vector<int> pt;
void init(){
    cin>>v>>e>>s>>t;
    G.clear();
    G.resize(v+1);
    check.resize(v+1);
    pt.resize(v+1);
    for(int i=0;i<=v;i++) check[i] = false;
    int x,y;
    while(e--){
        cin>>x>>y;
        G[x].push_back(y);
        //G[y].push_back(x);
    }
}
void pathBfs(int u,int t){
    //if(check[t]) return;
    check[u] = true;
    deque<int> dq;
    dq.push_back(u);
    while(dq.size()){
        int v = dq.front();
        dq.pop_front();
        if(check[t]) break;
        for(auto i:G[v]){
            if(!check[i]){
                pt[i] = v;
                check[i] = true;
                dq.push_back(i);
            }
        }
    }
}
void Result(){
    if(!check[t]) cout<<-1;
    else{
        vector<int> ans;
        int u = t;
        while(u!=s){
            ans.push_back(u);
            u = pt[u];
        }
        ans.push_back(s);
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    }
    cout<<endl;
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        init();
        pathBfs(s,t);
        Result();
    }
}


/*
1

6 9 1 6

1 2 2 5 3 1 3 2 3 5 4 3 5 4 5 6 6 4

*/

/*

#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1001];
bool visited[1001];
int before[1001];

void BFS(int start, int destination)
{
    queue<int> q;
    q.push(start);
    visited[start] = 1;
    while (!q.empty())
    {
        if (q.back() == destination)
            return;
        int u = q.front();
        q.pop();

        for (auto i : adj[u])
            if (!visited[i])
            {
                before[i] = u;
                q.push(i);
                visited[i] = 1;
            }
    }
}

void printResult(int start, int dest)
{
    if (!before[dest])
    {
        cout << "-1\n";
        return;
    }
    vector<int> res;
    while (dest != start)
    {
        res.push_back(dest);
        dest = before[dest];
    }
    res.push_back(start);
    reverse(res.begin(), res.end());
    for (auto i : res)
        cout << i << ' ';
    cout << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        memset(visited, 0, sizeof(visited));
        memset(before, 0, sizeof(before));
        int v, e, s, t;
        cin >> v >> e >> s >> t;
        for (int i = 1; i <= v; i++)
            adj[i].clear();
        for (int i = 1; i <= e; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }

        for (int i = 1; i <= v; i++)
            sort(adj[i].begin(), adj[i].end());

        BFS(s, t);
        printResult(s, t);
    }

    return 0;
}
*/

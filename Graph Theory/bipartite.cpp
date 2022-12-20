#include<bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
#define f0(i,n)  for(int i = 0; i<n; i++)
#define f1(i,n)  for(int i = 1; i<=n; i++)
#define f2(i,n)  for(int i = 1; i<n; i++)
#define endl "\n"
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define pi pair<int, int>
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define int long long
#define INF 1000000000
#define mod 1000000007
int Ceil(int a, int b) { return (a+b-1)/b; }

vector<vector<int>>adj;
vector<int>color;
vector<int>vis;

bool dfs(int node, int c){
    vis[node] = 1;
    color[node] = c;

    for(int child: adj[node]){
        if(vis[child] == 0){
            if(dfs(child, c ^ 1) == false){
                return false;
            }
        }
        else {
            if(color[child] == color[node]){
                return false;
            }
        }
    }
    return true;
}

void sol()
{
    int node,edge;
    cin>>node>>edge;

    adj.clear();
    vis.clear();
    color.clear();
    color = vector<int>(node+1);
    vis = vector<int>(node+1);
    adj = vector<vector<int>>(node+1);

    for(int i = 0; i<edge; i++){
        int a,b;cin>>a>>b;
        adj[a].pb(b);
        adj[b].pb(a);
    }

    bool flag = dfs(1,1);//node, color
    if(flag) cout<<"Bipartite"<<endl;
    else cout<<"Not Bipartite"<<endl;
}

int32_t main(){
    FastIO;
    int tt;
    tt = 1;
    // cin>>tt;
    while(tt--){
        sol();
    }
}
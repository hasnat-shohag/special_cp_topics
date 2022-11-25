Code:

    #include <bits/stdc++.h>
    using namespace std;

    #define FastIO ios_base::sync_with_stdio(0), cin.tie(0)
    #define f0(i, n) for (int i = 0; i < n; i++)
    #define f1(i, n) for (int i = 1; i <= n; i++)
    #define f2(i, n) for (int i = 1; i < n; i++)
    #define endl "\n"
    #define pb push_back
    #define mp make_pair
    #define vi vector<int>
    #define pi pair<int, int>
    #define all(x) x.begin(), x.end()
    #define f first
    #define sc second
    #define int long long
    int Ceil(int a, int b) { return (a+b-1)/b; }


    vi vec[100001];
    vi vis(1e5 + 1);

    void dfs(int node)
    {
        vis[node] = 1;
        // cout << node << " ";
        for (int i = 0; i < vec[node].size(); i++)
        {
            int child = vec[node][i];
            if (!vis[child])
                dfs(child);
        }
    }

    int32_t main()
    {
        FastIO;
        int n, m;
        cin >> n >> m;
        int a, b;
        f1(i, m)
        {
            cin >> a >> b;
            vec[a].pb(b);
            vec[b].pb(a);
        }
        int cnt  = 0;
        f1(i, n)
        {
            if (!vis[i])
            {
                dfs(i);
                cnt++;
            }
        }
        cout << cnt << endl;
    }

[Solution:](https://ideone.com/HUOKMp)

Code:

    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n, m, l;
        cin >> n >> m >> l; // n = node, m = edge, l = which node i want to go

        vector<int> adj[n];
        int u, v;

        for (int i = 0; i < m; i++)
        {
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> vis(n, -1);

        int par[n];
        for (int i = 0; i < n; i++)
            par[i] = i;

        // if source is need to input then change the vis[input]

        vis[2] = 0; // source node
        queue<int> q;
        q.push(2); // source node

        while (q.size())
        {
            v = q.front();
            q.pop();

            for (int x : adj[v])
            {
                if (vis[x] == -1)
                {
                    vis[x] = vis[v] + 1;
                    q.push(x);
                    par[x] = v;
                }
            }
        }
        // which node is connected ?
        for (int i = 0; i < n; i++)
        {
            if (vis[i] != -1)
                cout << 1 << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;

        // finding the sortest path of source node to target node
        cout << "path : ";
        v = l; // destination
        vector<int> path;
        path.push_back(v);
        while (v != par[v])
        {
            path.push_back(par[v]);
            v = par[v];
        }
        // reverse(path.begin(),path.end());
        for (int x : path)
            cout << x << " ";
        cout << endl;
    }
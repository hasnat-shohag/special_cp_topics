[Code:](https://ideone.com/ThqyAa)

Code:
    
    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int n, m;
        cin >> n >> m; // node , edge

        vector<pair<int, int>> adj[n];
        int u, v, w;

        for (int i = 0; i < m; i++)
        {
            cin >> u >> v >> w; // node to {node, weight}
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        bool vis[n];
        for (int i = 0; i < n; i++)
            vis[i] = false;

        vector<int>cost(n, -1);

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        pq.push({0, 0}); //{weight, node}
        cost[0] = 0; // sorce node
        while (pq.size())
        {
            v = pq.top().second;
            w = pq.top().first;
            pq.pop();
            if (vis[v] == true)
                continue;

            vis[v] = true;
            for (pair<int, int> x : adj[v])
            {
                if (vis[x.first] == true || (w + x.second > cost[x.first] && cost[x.first] != -1))
                    continue;
                cost[x.first] = w + x.second;
                pq.push({w + x.second, x.first});
            }
        }

        for (int i = 0; i < n; i++)
            cout << cost[i] << " ";
    }

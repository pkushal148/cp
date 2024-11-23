#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define F first
#define S second
#define PB push_back
#define rep(i, a, b) for (int i = a; i < b; i++)
vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, S});
    vector<int> dist(V, 1e9);
    dist[S] = 0;

    while (!pq.empty())
    {
        int node = pq.top().second, d = pq.top().first;
        pq.pop();

        for (auto it : adj[node])
        {
            int v = it[0], d1 = it[1];

            if (dist[v] > d + d1)
            {
                dist[v] = d + d1;
                pq.push({dist[v], v});
            }
        }
    }
    return dist;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<string> color(n);
    vector<vector<int>> adj[n];
    for (int i = 0; i < n; i++)
    {
        cin >> color[i];

        for (int j = 0; j < i; j++)
        {
            if (color[i][0] == color[j][0] || color[i][0] == color[j][1] || color[i][1] == color[j][0] || color[i][1] == color[j][1])
            {
                // adj[i][j] = j - i;
                // adj[j][i] = j - i;
                adj[i].push_back({j, abs(j - i)});
                adj[j].push_back({i, abs(j - i)});
            }
        }
    }

    // vector<vector<int>> adj(n, vector<int>(n, 1e9));

    // for (int i = 0; i < n; i++)
    // {
    //     adj[i][i] = 0;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (color[i][0] == color[j][0] || color[i][0] == color[j][1] || color[i][1] == color[j][0] || color[i][1] == color[j][1])
    //         {
    //             // adj[i][j] = j - i;
    //             // adj[j][i] = j - i;
    //             adj[i].push_back({j, j - i});
    //             adj[j].push_back({i, j - i});
    //         }
    //     }
    // }

    // shortest_distance(adj);
    vector<vector<int>> shortest[n];

    while (q > 0)
    {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        if (shortest[u].size() > 0)
        {
            vector<int> dist = shortest[u][0];
            if (dist[v] >= 1e9)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << dist[v] << endl;
            }
        }
        else if (shortest[v].size() > 0)
        {
            vector<int> dist = shortest[v][0];
            if (dist[u] >= 1e9)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << dist[u] << endl;
            }
        }
        else
        {
            vector<int> dist = dijkstra(n, adj, u);
            vector<int> dist1 = dijkstra(n, adj, v);

            shortest[u].push_back(dist);
            shortest[v].push_back(dist1);

            // cout<<<<endl;
            if (dist[v] >= 1e9)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << dist[v] << endl;
            }
        }
        q--;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        solve();
        t--;
    }

    return 0;
}

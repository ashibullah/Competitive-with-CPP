#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void bfs(vector<int> graph[], int start, int n)
{
    queue<int> q;
    vector<bool> visited(n + 1, false);

    q.push(start);
    visited[start] = true;

    while (!q.empty())
    {
        int current = q.front();
        cout << current << " ";
        q.pop();

        for (int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i];
            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main()
{
    int n, m;
    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    vector<int> graph[n + 1];

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "Enter starting node: ";
    cin >> start;

    cout << "BFS Traversal: ";
    bfs(graph, start, n);
    cout << "\n";
    return 0;
}

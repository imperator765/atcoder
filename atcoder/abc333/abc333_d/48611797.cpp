#include <iostream>
#include <vector>
using namespace std;

void dfs(int v, int p, int& comp_size, vector<bool>& visited, const vector<vector<int>>& adj) {
    visited[v] = true;
    comp_size++;
    for (int u : adj[v]) {
        if (u != p && !visited[u]) {
            dfs(u, v, comp_size, visited, adj);
        }
    }
}

int main() {
    int N;
    cin >> N;

    vector<vector<int>> adj(N);
    for (int i = 0; i < N - 1; ++i) {
        int u, v;
        cin >> u >> v;
        --u; --v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(N, false);
    int max_comp_size = 0;
    for (int v : adj[0]) {
        if (!visited[v]) {
            int comp_size = 0;
            dfs(v, 0, comp_size, visited, adj);
            max_comp_size = max(max_comp_size, comp_size);
        }
    }

    cout << N - max_comp_size << endl;
    return 0;
}

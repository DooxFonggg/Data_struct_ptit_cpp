#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool tham[1001];
int n, m;

void dfs(int u) {
    cout << u << " ";
    tham[u] = true;
    for(int v : adj[u]) {
        if(!tham[v]) {
            dfs(v);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int u;
        cin >> n >> m >> u;
        memset(tham, false, sizeof(tham));
        for(int i=0; i<m; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            //adj[y].push_back(x);
        }
        dfs(u);
        cout << endl;
    }
}
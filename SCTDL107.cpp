#include<bits/stdc++.h>

using namespace std;

int m,n;
vector<int> adj[1001];
bool tham[1001];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    tham[u] = true;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        cout << v << " ";
        for(int x : adj[v]) {
            if(!tham[x]) {
                q.push(x);
                tham[x] = true;
            }
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int u;
        cin >> n >> m >> u;
        for(int i = 0; i<m; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(tham, false, sizeof(tham));
        bfs(u);
        cout << endl;
    }

}
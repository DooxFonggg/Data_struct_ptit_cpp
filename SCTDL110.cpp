#include<bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool tham[1001];

int luu[1001];

void bfs(int u) {
    queue<int> q;
    q.push(u);
    tham[u] = true;
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int x : adj[v]) {
            if(!tham[x]) {
                q.push(x);
                tham[x] = true;
                luu[x] = v;
            }
        }
    }
}
void in(int u) {
    if(luu[u] == -1) {
        cout << u << " ";
        return;
    }
    in(luu[u]);
    cout << u << " ";
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        cin >> n >> m >> s >> t;
        for(int i =1; i<=n; i++) {
            adj[i].clear();
            luu[i] = -1;
        }
        for(int i=0; i<m; i++) {
            int x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(tham, false, sizeof(tham));
        bfs(s);
        if(!tham[t]) {
            cout << -1 << endl;
        }
        else {
            in(t);
            cout << endl;
        }
    }
}
#include<bits/stdc++.h>

using namespace std;

int n, m, s, t;
vector<int> adj[1001];
bool tham[1001];

vector<int> luu;

void dfs(int u) {
    tham[u] = true;
    luu.push_back(u);
    if(u == t) return;
    for(int v : adj[u]) {
        if(!tham[v]){
            dfs(v);
            if(!luu.empty() && luu.back() == t) return;
        }
    }
    luu.pop_back(); //backtrack
}
int main() {
    int test;
    cin >> test;
    while(test--) {
        cin >> n >> m >> s >> t;
        memset(tham, false, sizeof(tham));
        luu.clear();
        for(int i = 1; i<=n; i++) {
            adj[i].clear();
        }
        for(int i=0; i<m; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        dfs(s);
        if(!luu.empty() && luu.back()==t) {
            for(int x : luu) {
                cout << x << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> adj[1001];
bool tham[1001];
void dfs(int u) {
    cout << u << " ";
    tham[u] = true;
    // xet tat ca cac danh sach ke cua dinh u
    for(int v : adj[u]) {
        //neu v chua dc tham => tham v;
        if(!tham[v]) {
            dfs(v);
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        //nhap so dinh va canh, dinh dc tham
        int u;
        cin >> n >> m >> u;
        memset(tham, false, sizeof(tham));
        //nhap danh sach canh
        for(int i = 0; i<m; i++) {
            int x, y;
            cin >> x >> y;
            // chuyen tu danh sach canh sang danh sach ke
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(u);
        cout << endl;
    }


}
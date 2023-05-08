#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        for (int i = 1; i <= n; i++) {
            cout << i << ": ";
            for (int j = 0; j < adj[i].size(); j++) {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 1; i <= n; i++) {
            adj[i].clear();
        }
    }
    return 0;
}

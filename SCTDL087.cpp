#include<bits/stdc++.h>

using namespace std;

const int MAXN = 1e4;
int dist[MAXN];
bool tham[MAXN];

int main() {
	int test;
	cin >> test;
	while(test--) {
		int s, t;
		cin >> s >> t;
		memset(tham, false, sizeof(tham));
		memset(dist, 0, sizeof(dist));
		queue<int> q;
		q.push(s);
		dist[s] = 0;
		while(!q.empty()) {
			int u = q.front();
			q.pop();
			// th s - 1
			if(u == t) break;
			if(u>=1 && !tham[u-1]) {
				q.push(u-1);
				tham[u-1] = true;
				dist[u-1] = dist[u] + 1;
			}
			// th 2*u
			if(u<=MAXN/2 && !tham[u*2]) {
				q.push(2*u);
				tham[2*u] = true;
				dist[2*u] = dist[u] + 1;
			}
		}
		cout << dist[t] << endl;
	}
}

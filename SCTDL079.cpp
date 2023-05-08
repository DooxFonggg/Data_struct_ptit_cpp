#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	int dp[51];
	while(t--) {
		int n;
		cin >> n;
		memset(dp, -1, sizeof(dp));
		queue<int> q;
		q.push(0);
		dp[0] = 0;
		while(!q.empty()) {
			int v = q.front();
			q.pop();
			for(int i = 1; i*i <=n; i++) {
				int next = v + i*i;
				if(next <=n && dp[next] == -1) {
					dp[next] = dp[v] + 1;
					q.push(next);
				}
			}
		}
		cout << dp[n] << " ";
	}
}

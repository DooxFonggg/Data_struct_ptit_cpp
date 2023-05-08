#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int dp[n][m] = {};
		int a[n][m];
		for(int i = 1; i<=n; i++) {
			for(int j=1; j<=m; j++) {
				cin >> a[i][j];
			}
		}
		dp[1][1] = a[1][1]; // khoi tao duong di;
		// di xg
		for(int i = 2; i<=n; i++) {
			dp[i][1] = dp[i-1][1] + a[i][1];
		}
		// sang phai cung
		for(int j =2; j<=m; j++) {
			dp[1][j] = dp[1][j-1] + a[1][j];
		}
		// tim dg di toi uu;
		for(int i=2; i<=n; i++) {
			for(int j = 2; j<=m; j++) {
				dp[i][j] = min(min(dp[i-1][j-1], dp[i][j-1]), dp[i-1][j]) + a[i][j];
			}
		}
		cout << dp[n][m] << endl;
	}
}

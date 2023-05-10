#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1005;

int a[MAXN][MAXN];

int main() {
	
    a[0][0] = 1;
    for (int i = 1; i < MAXN; i++) {
        a[i][0] = 1;
        for (int j = 1; j < MAXN; j++) {
            a[i][j] = (a[i-1][j-1] + a[i-1][j]) % MOD;
        }
    }
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << a[n][k] << endl;
    }

    return 0;
}


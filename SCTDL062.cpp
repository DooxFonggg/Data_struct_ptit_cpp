#include <bits/stdc++.h>

using namespace std;

const int N = 105;
int a[N], b[N], n, m, k, cnt;

void Try(int pos1, int pos2, int s) {
    for (int i = pos1 + 1; i <= n; ++i) {
        if (s + a[i] == k && pos2 + 2 == m) {
            cnt++;
            return;
        }
        if (pos2 + 1 < m && s + a[i] < k) {
            b[pos2 + 1] = a[i];
            Try(i, pos2 + 1, s + a[i]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cnt = 0;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(0, -1, 0);
        cout << cnt << '\n';
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, C;
    cin >> N >> C;

    vector<int> w(N);
    int total_weight = 0;
    for (int i = 0; i < N; i++) {
        cin >> w[i];
        total_weight += w[i];
    }

    int l = 0, r = total_weight, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        int sum = 0, cnt = 0;
        for (int i = 0; i < N; i++) {
            if (sum + w[i] <= mid) {
                sum += w[i];
            } else {
                cnt++;
                sum = w[i];
            }
        }
        if (sum > 0) cnt++;

        if (cnt > C) {
            l = mid + 1;
        } else {
            ans = mid;
            r = mid - 1;
        }
    }

    cout << ans << endl;
    return 0;
}


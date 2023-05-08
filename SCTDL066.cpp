#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> dp(n + 1);
        dp[0] = 1;
        dp[1] = 1;
        for (int i = 2; i <= k; i++)
        {
            for (int j = 1; j <= min((int)k, i); j++)
            {
                dp[i] = (dp[i] + dp[i - j]) % 1000000007;
            }
        }
        long long tmp = 0;
        for (int i = 1; i <= k; i++)
        {
            tmp = (tmp + dp[i]) % 1000000007;
        }
        for (int i = k + 1; i <= n; i++)
        {
            dp[i] = tmp;
            tmp = ((tmp - dp[i - k] + 1000000007) % 1000000007 + dp[i]) % 1000000007;
        }
        cout << dp[n] << '\n';
    }
    return 0;
}


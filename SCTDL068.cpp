/*Make it count*/
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second

const int MOD=1e9+7;

using namespace std;
ll f[105][50005] = {}, mod = 1e9 + 7;
int main()
{
   

    for (int i = 1; i <= 9; i++)
        f[1][i] = 1;
    for (int i = 2; i <= 100; i++)
    {
        for (int j = 5000; j >= 0; j--)
        {
            for (int k = 0; k <= 9; k++)
            {
                if (j >= k)
                {
                    f[i][j] += f[i - 1][j - k];
                    f[i][j] %= mod;
                }
            }
        }
    }
   int t;
   cin >>t;
   while(t--){
        int n, k;
        cin >>n >>k;
        cout <<f[n][k] <<'\n';
   }

   return 0;
}

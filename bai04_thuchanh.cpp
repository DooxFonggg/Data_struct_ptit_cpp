#include <bits/stdc++.h>
#define ll long long

const int MOD=1e9+7;

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i = 0; i < n; ++i) cin >>a[i];
        sort(a,a+n);
        ll ans=0;
        for(int i = 0; i < n; ++i) ans += (a[i]*i)%MOD, ans%=MOD;
        cout <<ans <<'\n';
    }

   return 0;
}
#include <bits/stdc++.h>
#define ll long long

const int MOD=1e9+7;

using namespace std;
ll tinh(ll a, ll n){
    if(n == 0) return 1;
    if(n == 1) return a;
    ll tmp = tinh(a,n/2);
    if(n%2) return (a*((tmp*tmp)%MOD))%MOD;
    return (tmp*tmp)%MOD;
}
int main()
{
    int t;
    cin >>t;
    while(t--){
        ll a, n;
        cin >>a >>n;
        cout <<tinh(a,n) <<'\n';
    }

   return 0;
}
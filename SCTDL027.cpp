#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        ll max1, max2;
        max1 = 0;
        max2 = -1e18;
        for(ll i = 0; i<n; i++) {
            ll x;
            cin >> x;
            max1 = max(x, max1+x);
            max2 = max(max2, max1);
        }
        cout << max2 << endl;
    }
}
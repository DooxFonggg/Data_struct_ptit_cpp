#include<bits/stdc++.h>
#define ll long long

const int MOD = 1e9 + 7;

using namespace std;

ll tp(string a){
    ll ans = 0, tmp = 1;
    for(int i = a.size()-1; i >= 0; --i){
        if(a[i] == '1') ans += tmp;
        tmp <<= 1;
    }
    return ans;
}

int main(){

    int t;
    cin >> t;
    while(t--){
        string a, b;
        cin >> a >> b;
        ll x = tp(a);
        ll y = tp(b);
        cout << x * y << '\n';
    }

    return 0;
}


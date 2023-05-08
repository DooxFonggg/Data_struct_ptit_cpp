#include<bits/stdc++.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long max1 = 0, max2 = -1e18;
        for(long long i=0; i<n; i++) {
            long long x;
            cin >> x;
            max1 = max(x, max1+x);
            max2 = max(max2, max1);
        }
        cout << max2 << endl;
    }

}
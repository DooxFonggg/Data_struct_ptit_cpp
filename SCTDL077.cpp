#include<bits/stdc++.h>

using namespace std;

long long giaithua(long long n) {
    if(n == 0) {
        return 1;
    }
    return n*giaithua(n-1);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        long long a[n+1], b[n+1], checka[n+1] = {} , checkb[n+1] = {}, posta = 0, postb = 0;
        for(int i = 1; i <= n; i++) {
            long long x = 0;
            cin >> a[i];
            checka[a[i]] = 1;
            for(int j = 1; j < a[i]; j++) {
                if(!checka[j]) {
                    x++;
                }
            }
            posta += x * giaithua(n-i);
        }
        for(int i = 1; i <= n; i++) {
            long long y = 0;
            cin >> b[i];
            checkb[b[i]] = 1;
            for(int j = 1; j < b[i]; j++) {
                if(!checkb[j]) {
                    y++;
                }
            }
            postb += y * giaithua(n-i);
        }
        cout << abs(posta - postb) << endl;
    }
    return 0;
}


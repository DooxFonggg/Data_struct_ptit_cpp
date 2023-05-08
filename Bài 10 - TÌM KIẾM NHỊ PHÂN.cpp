#include<bits/stdc++.h>

using namespace std;

int tknhiphan(int a[], int l, int r, int k) {
    if(l <= r) {
        int m = (l+r)/2;
        if(k == a[m]) return m;
        if(k < a[m]) return tknhiphan(a, l, m-1, k);
        if(k > a[m]) return tknhiphan(a, m+1, r, k);
    }
    return -1;
} 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i=0; i<n; i++ ) {
            cin >> a[i];
        }
        int ketqua = tknhiphan(a, 0, n-1, k);
        if(ketqua == -1) {
            cout << "NO" << endl;
        }        
        else {
            cout << ketqua + 1 << endl;
        }
    }
}
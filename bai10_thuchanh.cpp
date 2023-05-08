#include<bits/stdc++.h>

using namespace std;

void sinh(int a[], int n) {
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i<0) return ;
    else {
        int j = n-1;
        while(j > i && a[i] >a[j]) j--;
        swap(a[i], a[j]);
        int l = i+1, r = n-1;
        while( l <= r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
    }
}
int main()  {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin >> a[i];
        }
        sinh(a, n);
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
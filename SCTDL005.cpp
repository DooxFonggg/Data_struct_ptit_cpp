#include<bits/stdc++.h>

using namespace std;

void ktao(int a[], int n) {
    for(int i = 0; i<n; i++) {
        a[i] = n-i;
    }
}
bool sinhnguoc(int a[], int n) {
    int i = n-2;
    while(i >=0 && a[i] < a[i+1]) {
        i--;
    }
    if(i < 0) return false;
    else {
        int j = n-1;
        while(a[i] > a[j]) {
            j--;
        }
        swap(a[i], a[j]);
        int l = i+1, r=n-1;
        while(l < r) {
            swap(a[l], a[r]);
            l++;
            r--;
        }
        return true;
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >>n;
        int a[n];
        ktao(a, n);
        do {
            for(int x : a) {
                cout << x;
            }
            cout << " ";
        }
        while(sinhnguoc(a, n));
        cout << endl;
    }
    
}
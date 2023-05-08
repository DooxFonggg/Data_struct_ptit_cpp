#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1][n+1];
    int b[n+1][n+1];
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            cin >> a[i][j];
        }
    }
    for(int i = 1; i<=n; i++) {
        int c = 0;
        for(int j =1; j<=n; j++) {
            if(a[i][j] == 1) {
                b[i][++c] = j; 
            } 
        }
        b[i][0] = c;
    }
    for(int i = 1; i<=n; i++) {
        cout << i << ": ";
        for(int j =1; j<=b[i][0]; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
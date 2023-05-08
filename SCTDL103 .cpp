#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1][n+1] = {0};
    string s;
    cin.ignore();
    for(int i =1; i<=n; i++) {
        int k = 0;
        getline(cin, s);
        s+= ' ';
        for(int j = 0; j<s.size(); j++) {
            if(s[j] >= '0' && s[j] <= '9') {
                k= k*10+ (s[j]-'0');
            }
            else {
                a[i][k] = 1;
                k = 0;
            }
        }
    }
    for(int i = 1; i<=n; i++) {
        for(int j = 1; j<=n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
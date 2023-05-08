#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int tien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
        int dem = 0;
        for(int i = 0; i<10; i++) {
            dem += n/tien[i];
            n %= tien[i];
            if(n == 0) break;
        }
        cout << dem << endl;
    }
}
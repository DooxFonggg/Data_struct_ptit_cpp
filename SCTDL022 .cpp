#include<bits/stdc++.h>

using namespace std;

int fib[30];
bool ok[30]; // luu tat ca cac gia tri la 0
int dem;
void tryfib(int n, int pos, int sum) {
    if(sum == n) {
        dem++;
        return;
    }
    if(pos == 0 || sum >= n) return;
    tryfib(n, pos-1, sum);
    // dk tranh lap lai vd 13 = 5 + 5 + 3 vay 5 lap 5 roi nen se k set vi da tich vi tri do bang 1
    if(ok[pos-1] == 0 && fib[pos]+sum <= n) {
        ok[pos-1] = 1;
        tryfib(n, pos-1, fib[pos]+sum);
        ok[pos-1] = 0; 
    }
    
} 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        // tinh cac gia tri fibo <10^5
        fib[0] = 0;
        fib[1] = 1;
        fib[2] = 2;
        for(int i = 3; i<30; i++) {
            fib[i] = fib[i-1] +fib[i-2];
        }
        dem = 0; // cu moi case test dem se tra ve 0;
        tryfib(n, 29, 0);
        cout << dem << endl;

        
    }
}
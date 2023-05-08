#include<bits/stdc++.h>

using namespace std;

int n, k, used[20] ={0};
int x[20];

void inkq() {
    for(int i = 1; i<=k; i++) {
        cout << x[i];
    }
    cout << " ";
}
void Try(int i, int key) {
    for(int j = key + 1; j<= n-k+i; j++) {
        if(used[j] == 0) {
            x[i] = j;
            used[j] = 1;
            if(i == k) {
                inkq();
            }
            else {
                Try(i+1, j);
            }
            used[j] = 0;
        }
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(used, 0, sizeof(used)); // tai case test moi dua het cac used ve 0
        cin >> n >> k;
        Try(1, 0);
        cout << endl;
    }
}
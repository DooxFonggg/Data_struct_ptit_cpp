#include<bits/stdc++.h>

using namespace std;

bool kt(int x) {
    while(x != 0) {
        int d = x%10;
        if(d != 0 && d != 9) {
            return false;
        }
        x/=10;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int i = 1;
        while(1) {
            int x = n*i; // boi cua n
            if(kt(x)) {
                cout << x << endl;
                break;
            }
            i++; 
        }
    }

}
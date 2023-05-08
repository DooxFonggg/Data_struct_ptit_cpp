#include<bits/stdc++.h>

using namespace std;


void sinhxauAB(string s, int n) {
    if(n == 0) {
        cout << s << endl;
        return;
    }
    else {
        sinhxauAB(s + "A", n-1);
        sinhxauAB(s + "B", n-1);
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        sinhxauAB(s, n);
    }

}
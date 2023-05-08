#include<bits/stdc++.h>

using namespace std;

int togray(int n) {
    // ^ la phep XOR khi chuyen tu so thap phan n sang ma gray roi chuyen lai qua so phap pha 
    return n^(n >> 1); // n = 1 1 1 => n >> 1 = 0 1 1 
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << togray(n) << endl;
    }
}

#include<bits/stdc++.h>

using namespace std;

void in(vector<int> v) {
    cout << "(";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i];
    }
    cout << ")";
}
void tach(int n, int ss, vector<int> &v) {
    if(n == 0) {
        in(v);
    }
    else {
        for(int i = min(ss, n); i >= 1; i--) {
            v.push_back(i);
            tach(n-i, i, v);
            v.pop_back();
        }
    }
    }

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        tach(n, n, v);
        cout << endl;

    }

}
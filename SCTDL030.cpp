#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        string s;
        cin >> k >> s;
        sort(s.begin(), s.end(), greater<char>());
        int n = s.size();
        for(int i = 0; i<n && k>0; i++) {
            for(int j = i+1; j<n && k>0; j++) {
                if(s[j] > s[i]) swap(s[j], s[i]);
                k--;
            }
        }
        cout << s << endl;
    }
}
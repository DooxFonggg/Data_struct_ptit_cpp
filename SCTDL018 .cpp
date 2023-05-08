#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        vector<int> v;
        for(int i =0; i<n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }
        while(n > 0) {
            cout << "[";
            for(int i = 0; i<n; i++) {
                cout << v[i];
                if(i < n-1) {
                	cout << " "; 
				} 
            }
            cout << "]" << endl;
            for(int i = 0; i< n; i++) {
                v[i] += v[i+1];
            }
            n--;
        }
        v.clear();
    }

}
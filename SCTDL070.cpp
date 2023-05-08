#include<bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int c, n;
		cin >> c >> n;
		int a[n];
		for(int i =0; i<n; i++) {
			cin >> a[i];
		}
		sort(a, a+n);
		int max1 = 0;
		for(int i = 0; i<n; i++) {
			int tong = 0;
			int j = i;
			// duyet theo thu tu tong nap lon nhat se dc update
			while(j <n && tong + a[j] <= c) {
				tong += a[j];
				j++;
			}
			max1 =  max(max1, tong);
		}
		cout << max1 << endl;
	}
}

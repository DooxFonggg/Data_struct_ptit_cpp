#include<bits/stdc++.h>

using namespace std;

int cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}
void sorting2(int a[], int n, int x) {
	pair<int, int> arr[n];
	for(int i=0; i<n; i++) {
		arr[i].first = a[i];
		arr[i].second = abs(x-a[i]);
	}
	sort(arr, arr + n, cmp);
	for(int i =0; i<n; i++) {
		cout << arr[i].first << " ";
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		sorting2(a, n, x);
		cout << endl;
	}
	
}

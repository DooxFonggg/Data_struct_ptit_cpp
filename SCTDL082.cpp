#include<bits/stdc++.h>

using namespace std;

stack<int> st;
void lat( int a[], int n) {
	if(st.empty()) return;
	int x = st.top();
	st.pop();
	a[n] = x;
	lat( a, n+1);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n;
		int a[n+1];
		//stack<int> st;
		for(int i = 0; i<n; i++) {
			cin >>x;
			st.push(x); 
		}
		lat(a, 0);
		for(int i=0;i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	
}

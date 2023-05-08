	#include<bits/stdc++.h>
	
	using namespace std;
	
	int main() {
		int t;
		cin >> t;
		while(t--) {
			int n;
			cin >> n;
			int h[n+1];
			for(int i=0; i<n; i++) {
				cin >> h[i];
			}
			stack<int> st;
			long long s = 0;
			//xet nhung canh lon
			for(int i =0; i<n; i++) {
				while(!st.empty() && h[st.top()] > h[i]) {
					int dai = h[st.top()];
					st.pop();
					int rong = (st.empty() ? i : i - st.top() - 1);
					s = max(s, (long long)dai*rong);
				}
				st.push(i);
			}
			// xet nhung canh con xot lai trong stack
			while(!st.empty()) {
				int dai = h[st.top()];
				st.pop();
				int rong = (st.empty() ? n : n - st.top() - 1);
				s = max(s, (long long)dai * rong);
			}
			cout << s << endl;
			
		}
	}

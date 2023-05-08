#include<bits/stdc++.h>

using namespace std;

string n, k;
bool check(string s) {
	if(s.size() < n.size() || (s.size() == n.size() && s <= n)) return true;
	return false;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n;
		stack<string> st;
		int d = 0;
		st.push("1");
		while(st.size()) {
			k = st.top();
			d++;
			st.pop();
			if(check(k+"0")) st.push(k+"0");
			if(check(k+"1")) st.push(k+"1");
		}
		cout << d << endl;
	}
}

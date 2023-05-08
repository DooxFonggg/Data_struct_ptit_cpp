#include<bits/stdc++.h>

using namespace std;

string chuyen(string s) {
	stack<string> st;
	int len = s.size();
	for(int i = 0; i<len; i++) {
		if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^') {
			string a = st.top();
			st.pop();
			string b = st.top();
			st.pop();
			string tmp = s[i] + b + a;
			st.push(tmp);
		}
		else st.push(string(1,s[i]));
	}
	return st.top();
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		cout << chuyen(s) << endl;
	}
}
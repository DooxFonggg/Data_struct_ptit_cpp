#include<bits/stdc++.h>

using namespace std;

int depth(string s, int &index) {
	if(s[index] == 'l') {
		return 0;
	}
	else if(s[index] == 'n') {
		index++;
		int left = depth(s, index);
		index++;
		int right = depth(s, index);
		return max(left, right) + 1;
	}
	else {
		return -1;
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int index = 0;
		int d = depth(s, index);
		cout << d << endl;
	}
	
}

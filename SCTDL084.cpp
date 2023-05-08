#include<bits/stdc++.h>

using namespace std;

int bfs(int n) {
	queue<int> q;
	q.push(9);
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		if(x%n == 0) {
			return x;
			break;
		}
		q.push(x*10);
		q.push(x*10+9);
	}
	return -1;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n; cin >> n;
		cout << bfs(n) << endl;
	}
	return 0;
}

#include<bits/stdc++.h>

using namespace std;

// cach lam: sinh ra cau hinh tiep theo bang cach lay so k+1 + x theo dang nhi phan
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		string x;
		cin >> x;
		// chuyen k+1 sang so nhi phan
		bitset<50> binary(k+1);
		string binary_str = binary.to_string().substr(50-n); // lay n bit
		// tien hanh cong (k+1) vs x;
		int du = 0;
		int sum = 0;
		string y = "";
		for(int i =n-1; i>=0; i--) {
			sum = (binary_str[i] - '0') + (x[i] - '0') + du;
			if(sum == 0) {
				y = '0' + y;
				du = 0;
			}
			else if(sum == 1) {
				y = '1' + y;
				du = 0;
			}
			else if(sum == 2) {
				y = '0' + y;
				du = 1;
			}
			else {
				y = '1' + y;
				du = 1;
			}
		}
		cout << y << endl;
	}
}

#include<bits/stdc++.h>

using namespace std;

const int m = 1e9 + 7;

long long mu(long long a, long long n) {
    if(n == 0) return 1;
    if(n == 1) return a;
    long long tmp = mu(a, n/2);
    if(n%2 == 0) return (tmp*tmp)%m;
    if(n%2 == 1) return (a*((tmp*tmp)%m))%m;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long a, n;
        cin >> a >> n;
        cout << mu(a, n) << endl;
    }

}
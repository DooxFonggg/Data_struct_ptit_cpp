#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a,b;
        int min_sum, max_sum;
        cin >> a >> b;
        string A = to_string(a);
        string B = to_string(b);
        // chuyen 3 thanh 5
        replace(A.begin(), A.end(),'3' ,'5');
        replace(B.begin(), B.end(), '3', '5');
        int tong35 = stoi(A) + stoi(B);
        // chuyen 5 thanh 3
        replace(A.begin(), A.end(), '5', '3');
        replace(B.begin(), B.end(), '5', '3');
        int tong53 = stoi(A) + stoi(B);
        // tim min va max
        min_sum = min(tong35, tong53);
        max_sum = max(tong35, tong53);
        cout << min_sum << " "<< max_sum << endl;
    }
}
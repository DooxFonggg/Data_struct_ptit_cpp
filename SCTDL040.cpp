#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int A[n];
        int k= 0;
        for(int &x : A) {
            cin >> x;
            k++;
        }
        sort(A, A+n);
        int a ,b;
        a= 0;
        b=0;
        for(int i = 0; i<k; i++) {
            if(i%2) b = b*10+A[i];
            else a = a*10+A[i];
        }
        cout << a+b << endl;
    }
}
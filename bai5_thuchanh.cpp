// Cho xâu ký tự S bao gồm các ký tự in thường. Nhiệm vụ của bạn là kiểm tra xem ta có thể sắp đặt lại các ký tự trong S để hai ký tự giống nhau đều không kề nhau hay không? Đưa ra 1 nếu có thể sắp đặt lại các ký tự trong S thỏa mãn yêu cầu bài toán, ngược lại đưa ra -1.

#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int dem[26] = {0}; // 26 ki tu chu in thuong

        // dem so lan xuat hien
        for(char c : s) {
            dem[c-'a']++; // tra ve so nguyen 
        }
        // tim max
        int maxkt = 0;
        for(int i = 0; i<26; i++) {
            maxkt = max(maxkt, dem[i]);
        }
        // kt xem so lan > do dai cua xau /2 khong => neu lon hon se khong sap xep lai dc => van con ki tu trung nhau 
        if(maxkt > (s.size() + 1)/2) {
            cout << -1 << endl;
        }
        else cout << 1 << endl;
        return 0;
    }
}
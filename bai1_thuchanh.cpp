//Cho xâu nhị phân X[], nhiệm vụ của bạn là hãy đưa ra xâu nhị phân tiếp theo của X[]. Ví dụ X[] =”010101” thì xâu nhị phân tiếp theo của X[] là “010110”.

#include<bits/stdc++.h>

using namespace std;

string s;
void sinhxau() {
    int i = s.size() - 1;
    while(i>=0 && s[i] == '1') {
        s[i] = '0';
        i--;
    }
    if(i >= 0) {
        s[i] = '1';
    } 
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> s;
        sinhxau();
        cout << s << endl;
    }
}
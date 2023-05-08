#include<bits/stdc++.h>

using namespace std;

// res la ma nhi phan ban dau
string magray(string res) {
    string gray;
    gray += res[0]; //ki tu dau tien khong doi
    for(int i = 1; i<res.size(); i++) {
        if(res[i-1] != res[i] ) {
            gray += "1";
        }
        else {
            gray += "0";
        }
    }
    return gray;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string res;
        cin >> res;
        cout << magray(res) << endl;
    }

}
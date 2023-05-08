#include<bits/stdc++.h>

using namespace std;

void sinhxau(string s, vector<string>& res) {
    char tim = s.find('?');
    if(tim == string::npos) {
        res.push_back(s);
    }
    else {
        s[tim] = '0';
        sinhxau(s, res);
        s[tim] = '1';
        sinhxau(s, res);
    }
}

int main() {
    vector<string> res;
    int t; 
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        sinhxau(s, res);
        for(string x : res) {
            cout << x << endl;
        }
        res.clear();
    }
}

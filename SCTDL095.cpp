#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, ans= "";
        cin >> s;
        stack<char> st, ld;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push(s[i]);
                ld.push(s[i-1]);
            }
            else if(s[i] == ')') {
            	string k = "";
                while(!st.empty()) {
                    char c = st.top(); st.pop();
                    char d = st.top(); st.pop();
                    if(ld.top() == '-') {
                        k = c+k;
                        if(d == '-') {
                            k = '+' + k;
                        }
                        else k = '-' + k;
                    }
                    else {
                        k = c+k;
                        k = d+k;
                    }
                    if(d == '(') { 
                        for(int j = 1; j < k.size(); j++) {
                            st.push(k[j]);
                        }
                        break;
                    }
                }
                ld.pop(); 
            }
            else st.push(s[i]);
        }
        while(!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}


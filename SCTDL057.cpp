#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,a,b) for(int i=a; i<=b; i++)
const int N = 100005;

ll findx(ll a[], ll n, ll k){
	ll l = 0, r =n-1;
	ll res = -2;
	while(l <= r){
		ll mid = l +(r-l)/2;
		if(a[mid] <= k){
			res = mid;
			l = mid+1;
		}
		else{
			r = mid-1;
		}
	}
	return res + 1;
}

int main()
{
    int t;
    cin >>t;
    while(t--){
        ll n, k;
        cin >>n >>k;
        ll a[N];
        f(i,0,n-1) cin >>a[i];
        sort(a,a+n);
        cout <<findx(a,n,k) <<'\n';
    }

   return 0;
}


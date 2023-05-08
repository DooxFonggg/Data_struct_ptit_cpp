#include<bits/stdc++.h>

using namespace std;

int sorting4(int a[], int b[],int n, int m, int union1[], int &unionsize, int intersecion1[], int &intersectionsize) {
	int i = 0, j=0;
	unionsize = 0;
	intersectionsize = 0;
	while(i < n && j < m) {
		if(a[i] < b[j]) {
			union1[unionsize++] = a[i];
			i++;
		}
		else if(a[i] > b[j]) {
			union1[unionsize++] = b[j];
			j++;
		}
		else {
			union1[unionsize++] = a[i];
			intersecion1[intersectionsize++] = a[i];
			i++;
			j++;
		}
	}
	//cac phan tu con lai
	while(i<n) {
		union1[unionsize++] = a[i];
		i++;
	}
	while(j<m) {
		union1[unionsize++] = b[j];
		j++;
	}
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for(int i =0; i<n; i++) {
			cin >> a[i];
		}
		for(int i=0; i<m; i++) {
			cin >> b[i];
		}
		sort(a, a+n);
		sort(b, b+m);
		int union1[m+n], unionsize;
		int intersection1[min(m,n)], intersectionsize;
		sorting4(a, b, n, m, union1, unionsize, intersection1, intersectionsize);
		for(int i =0; i < unionsize; i++) {
			cout << union1[i] << " ";
		}
		cout << endl;
		for(int i = 0; i<intersectionsize; i++) {
			cout << intersection1[i]<< " ";
		}
		cout << endl;
		
	}
}

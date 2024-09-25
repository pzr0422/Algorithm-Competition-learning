// Ò»Î¬Êý×é15
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, Q;
	cin >> n >> Q;
	int t[1001];
	for(int i = 0; i < n; i++){
		cin >> t[i];
	}
	int l, r;
	while(cin >> l && cin >> r){
		int count = 0;
		for(int i = 0; i < n; i++){
			if(t[i] >= l && t[i] <= r) count++;
		}
		cout << count << endl;
	}
	return 0;
} 

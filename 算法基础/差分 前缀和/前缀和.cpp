// 前缀和1
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int arr[N];
int S[N];

int main(void){
	int n, m;
	cin >> n >> m;
	
	for(int i = 0; i <= n; i++){
		cin >> arr[i];
	}
	
	// 维护前缀和数组SN
	S[0] = 0;
	for(int i = 1; i <= n; i++){
		S[i] = S[i - 1] + arr[i];
	} 
	 
	int l, r;
	for(int i = 0; i < m; i++){
		cin >> l >> r;
		cout << S[r] - S[l - 1];
	}
	
	return 0;
} 

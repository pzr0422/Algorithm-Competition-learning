// HZOJ-44 最长上升子序列
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int val[N];
int dp[N];
int n;
int ans;
int main(void){
	cin >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d", val + i);
	}
	for(int i = 1; i <= n; i++){
		// 遍历i位置前所有位置 
		for(int j = 0; j < i; j++){
			if(val[j] < val[i]) dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(ans, dp[i]);
	}
	cout << ans << endl;
	return 0;
} 

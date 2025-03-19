// HZOJ-47 01背包2
// 利用容斥原理 
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int V_max = 10005;

int w[N], val[N];
int V, n; // 最大承重数和物品数 
int dp[N][V_max]; // 答案数组 -- dp(i, j)代表有i件物品，背包承重为j的时候的最大价值 
 
int main(void){
	cin >> V >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d%d", &w[i], &val[i]);
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= V; j++){
			dp[i][j] = dp[i - 1][j];
			if(j < w[i]) continue; // 当前承重小于物品重量
			dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + val[i]); 
		}
	}
	cout << dp[n][V] << endl;
	return 0;
}

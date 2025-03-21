// 01背包
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int n, m;
int v[N], w[N]; // 体积和价值 
int dp[N][N]; // 存储最终结果 

int main(void){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) scanf("%d%d", v[i], w[i]);
	
	// DP过程
	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= m; j++){
			dp[i][j] = dp[i - 1][j];
			if(j >= v[i]){
				dp[i][j] = max(dp[i][j], dp[i - 1][j - v[i]] + w[i]);
			}
		}
	} 
	cout << dp[n][m] << endl;
	return 0;
}
 

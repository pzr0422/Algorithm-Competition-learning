// 01背包优化（使用一维数组存储dp状态）
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int n, m;
int v[N], w[N]; // 体积和价值 
int dp[N]; // 存储最终结果 

int main(void){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) scanf("%d%d", v[i], w[i]);
	
	// DP过程
	for(int i = 1; i <= n; i++){
		for(int j = m; j >= v[i]; j--){
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	} 
	cout << dp[m] << endl;
	return 0;
}
  

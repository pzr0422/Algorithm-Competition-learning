// HZOJ-47 01背包
#include <bits/stdc++.h>
using namespace std;

const int N = 105;

int w[N], val[N];
int V, n; // 最大承重数和物品数 
int ans; // 最大价值
 
// 状态：背包剩余承重, 当前价值，w和val的下标 
void dfs(int left_weight, int value, int pos){
	// 边界 
	if(pos == n){
		ans = max(value, ans);
		return;
	}
	// 选或不选
	// 能选：当前剩余承重>当前物品重量
	if(left_weight >= w[pos]){
		dfs(left_weight - w[pos], value + val[pos], pos + 1);
	} 
	// 或者不选（不选没有任何条件）
	dfs(left_weight, value, pos + 1); 
}

int main(void){
	cin >> V >> n;
	for(int i = 0; i < n; i++){
		scanf("%d%d", &w[i], &val[i]);
	}
	dfs(V, 0, 0);
	cout << ans << endl;
	return 0;
}

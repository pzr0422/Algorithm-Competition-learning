// 染色法确定二分图
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 2e5 + 10; // 无向图

// 使用邻接表来存储
int h[N], e[M], ne[M], idx;
int color[N]; // 表示每个点被染成什么颜色(0没有染色 1,2为两种颜色)

int add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 

int n, m;

bool dfs(int u, int c){
	color[u] = c;
	for(int i = h[u]; i != -1; i = ne[i]){
		int j = e[i];
		if(!color[j]){
			if(!dfs(j, 3 - c)) return false;
		} 
		else{
			if(color[j] == c) return false;
		}
	}
	return true;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b);
		add(b, a);
	}
	// 开始染色 遍历每个点 
	bool flag = true; // 染色是否失败 
	for(int i = 1; i <= n; i++){
		// 若当前节点未被染色 
		if(!color[i]){
			if(!dfs(i, 1)) {
				flag = false;
				break;
			}
		}
	}
	if(flag) puts("Yes");
	else puts("No"); 
	return 0;
} 

// Prim算法求最小生成树
#include <bits/stdc++.h>
using namespace std;

// 根据题目所给范围定义点和边的数量
const int N = 510;
const int M = 1e5 + 10;
// 定义正无穷
const int INF = 0x3f3f3f3f; 

// 稠密图用邻接矩阵存储
int g[N][N];
int dist[N]; // 用于存储当前点到集合的距离
bool st[N]; // 标记当前点是否在集合中 
int n, m; 
 
int prim(){
	memset(dist, 0x3f, sizeof(dist));
	int res = 0; // 用于存储最小生成树所有边的权值之和
	// 循环n次代表往最小生成树的集合中加入n个点
	for(int i = 0; i < n; i++){
		int t = -1; // 代表这个循环中距离集合最近的点
		// 遍历所有点 
		for(int j = 1; j <= n; j++){
			if(!st[j] && (t == -1 || dist[j] < dist[t])) t = j;
		} 
		if(i && dist[t] == INF) return INF; // 若不连通 
		if(i) res += dist[t]; // 累加结果 
		// 更新距离
		for(int j = 1; j <= n; j++){
			dist[j] = min(dist[j], g[t][j]);
		} 
		st[t] = true;
	} 
	return res;
} 
 

int main(void){
	// 初始化邻接矩阵
	memset(g, 0x3f, sizeof(g)); 
	cin >> n >> m;
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = min(g[a][b], c);
		g[b][a] = min(g[b][a], c);
	}
	
	int t = prim();
	if(t == INF) cout << "impossible" << endl;
	else cout << t << endl;
	return 0;
} 

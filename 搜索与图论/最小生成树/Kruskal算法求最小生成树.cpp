// Kruskal算法求最小生成树
#include <bits/stdc++.h>
using namespace std;

// 稀疏图 
const int N = 1e5 + 10;
const int M = 2e5 + 10;

int n, m;
struct Edge{
	int a, b, w;
	// 重载运算符
	bool operator< (const Edge &W)const{
		return w < W.w;
	} 
}edges[M];

int p[N]; // 并查集中用于表示父节点的数组 

int find(int x){
	if(p[x] != x) p[x] = find(p[x]); // 路径压缩 
	return p[x];
}
int main(void){
	cin >> n >> m;
	// 初始化边 
	for(int i = 0; i < m; i++){
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		edges[i].a = a;
		edges[i].b = b;
		edges[i].w = w;
	}
	
	// Kruskal算法
	sort(edges, edges + m); // 按边的权值大小排序
	
	for(int i = 1; i <= n; i++) p[i] = i; // 初始化并查集
	
	int res = 0; // 最小生成树中权值之和 
	int cnt = 0; // 当前最小生成树中有多少条边 
	// 遍历每个边 
	for(int i = 0; i < m; i++){
		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
		a = find(a);
		b = find(b);
		// 如果两个点不连通，则加入
		if(a != b){
			res += w;
			cnt++;
			p[b] = a;
		} 
	} 
	// 不连通 
	if(cnt < n - 1) puts("impossible");
	else cout << res << endl;
	return 0;
} 

// 有边数限制的最短路
#include <bits/stdc++.h>
using namespace std;

const int N = 510; // 节点个数
const int M = 1e5 + 10; // 边数 

int n, m, k; 
int dist[N];
int backup[N]; // 备份，用于限制边数 

// Bellman-Ford的边可以由结构体存储
struct Edge{
	int a, b, w;
}edges[M];
 
 
int bellman_ford(){
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	for(int i = 0; i < k; i++){
		// 当前dist复制给backup 
		memcpy(backup, dist, sizeof(dist)); // 用上一次迭代的结果（遍历每一条边时）
		for(int j = 0; j < m; j++){
			int a = edges[j].a, b = edges[j].b, w = edges[j].w;
			if(dist[b] > backup[a] + w) dist[b] = backup[a] + w; 
		}
	}
	if(dist[n] > 0x3f3f3f3f / 2) return -1;
	else return dist[n];
}

int main(void){
	cin >> n >> m >> k;
	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		edges[i].a = a;
		edges[i].b = b;
		edges[i].w = c;
	}
	int t = bellman_ford();
	if(t == -1) cout << "impossible" << endl;
	else cout << t << endl;
	return 0;
} 

// Dijkstra算法
#include <bits/stdc++.h>
using namespace std;

const int N = 510; // 节点个数 

int n, m;
int g[N][N]; // 邻接矩阵,存储各边之间的距离 
int dist[N]; // 当前最短距离
bool st[N]; // 当前点的最短路有没有确定 

int dijkstra(){
	// 初始化距离为正无穷
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0; // 源节点的距离初始化为0
	// 遍历次数（每次加入一个点） 
	for(int i = 0; i < n; i++){
		// t:不在s中的距离最短的点
		int t = -1;
		for(int j = 1; j <= n; j++){
			// 如果：当前点没有被确定最短距离and距离比当前距离短，就把当前点j赋值给t 
			if(!st[j] && (t == -1 || dist[j] < dist[t])) t = j;
		}
		if(t == n) break; // 优化效率 
		// 标记当前点
		st[t] = true; 
		// 根据t更新最短距离
		for(int j = 1; j <= n; j++){
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		} 
	}
	// 如果不能到达目标节点
	if(dist[n] == 0x3f3f3f3f) return -1;
	else return dist[n];
}

int main(void){
	cin >> n >> m; 
	memset(g, 0x3f, sizeof(g)); // 将邻接矩阵中的值初始化为最大值（用于更新距离） 
	
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = min(g[a][b], c); // 处理重边情况：取这些边中值最小的边 
	} 
	
	int t = dijkstra();
	cout << t << endl;
	return 0;
} 

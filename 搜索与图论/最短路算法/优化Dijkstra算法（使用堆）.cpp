// 优化Dijkstra算法（使用堆）
// 优化场景：稀疏图（节点数量较多） 
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 1e6 + 10;

int n, m; // n个节点，m条边 
// 使用邻接表来存储稀疏图 
int h[N], e[N], ne[N], idx, w[N]; // w表示权重 
int dist[N];
bool st[N];

// 往邻接表里添加边
void add(int a, int b, int c){
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
} 

int dijkstra(){
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	
	// 维护一个堆，存储点的最短距离，同时需要知道点的编号，所以用pair STL来存储-->{距离，编号}
	// 小根堆（记住定义方式，默认是大根堆） 
	priority_queue<PII, vector<PII>, greater<PII>> heap;
	heap.push({0, 1});
	while(heap.size()){
		auto t = heap.top(); // 找出最短距离的点（代替了遍历，复杂度为logn）
		heap.pop();
		
		int ver = t.second; // 点的编号
		int dis = t.first; // 点的最短距离
		if(st[ver]) continue; // 重边情况，直接不处理跳过 
		
		// 标记当前点
		st[ver] = true;
		
		// 尝试更新其他点的距离 
		for(int i = h[ver]; i != -1; i = ne[i]){
			int j = e[i];
			if(dist[j] > dis + w[i]){
				dist[j] = dis + w[i];
				// 将已经确定最短距离的j点压入队列 
				heap.push({dist[j], j});
			}
		}
	}
	
	if(dist[n] == 0x3f3f3f3f) return -1;
	else return dist[n];
}

int main(void){
	scanf("%d%d", &n, &m);
	// 初始化邻接表
	memset(h, -1, sizeof(h)); 
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	int t = dijkstra();
	cout << t << endl;
	
	return 0;
} 

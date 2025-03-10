// 图中点的层次
// 采用邻接表来存储图 
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;
int n, m; // n个节点 m条边 
int h[N], e[M], ne[M], idx; // 邻接表
int q[N]; // 用于BFS的队列 
int d[N]; // 用于记录最短路的距离 
 
void add(int a, int b){
	// 处理自环
	if(a == b) return; 
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
	// 重边or自环	
}

// 求解1-n的最短距离 
int BFS(){
	int hh = 0, tt = 0;
	memset(d, -1, sizeof(d));
	q[0] = 1; // 队列中放的是节点的编号
	d[1] = 0;
	while(hh <= tt && q[hh] != n){
		// 队头出队 
		int node = q[hh++];
		for(int i = h[node]; i != -1; i = ne[i]){
			// 入队并修改距离
			// 未被遍历过的点 
			if(d[e[i]] == -1){
				q[++tt] = e[i];
				d[e[i]] = d[node] + 1;
			}
			
		}
	} 
	return d[n];
}

int main(void){
	cin >> n >> m;
	memset(h, -1, sizeof(h));
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	cout << BFS() << endl;
	return 0;
} 

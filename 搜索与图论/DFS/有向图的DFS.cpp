// 有向图的DFS
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * N;

int n, m;
int h[N], e[M], ne[M], idx;
int vis[N];

// 插入边的操作 
void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 


// DFS
void DFS(int u){
	// 标记当前这个点u已经被搜索过
	vis[u] = 1; 
	// 寻找这个节点可以访问的点p(vis)
	for(int i = h[u]; i != -1; i = ne[i]){
		int node = e[i];
		// 如果没有被访问过,继续访问 
		if(!vis[node]) DFS(node);
	}
}

int main(void){
	memset(h, -1, sizeof(h));
	DFS(1); // 从节点1开始深搜 
	return 0;
} 

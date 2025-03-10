// 树的重心
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;

int n;
int h[N], e[M], ne[M], idx;
int vis[N];
int ans = N;

// 插入边的操作 
void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 


// DFS递归方法：返回以u为根的子树的节点数量 
int DFS(int u){
	// 标记当前这个点u已经被搜索过
	vis[u] = 1; 
	
	int sum = 1, res = 0; // res为结果 sum为u的所有子树的节点数量之和+1(u本身) 
	
	// 寻找这个节点可以访问的点p(vis)
	for(int i = h[u]; i != -1; i = ne[i]){
		int node = e[i];
		// 如果没有被访问过,继续访问 
		if(!vis[node]) {
			int s = DFS(node);
			res = max(s, res);
			sum += s;
		}
	}
	res = max(res, n - sum);
	ans = min(ans, res); 
	return sum;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		int a, b;
		cin >> a >> b;
		// 无向图 
		add(a, b);
		add(b, a);
	}
	DFS(1);
	cout << ans << endl;
	return 0;
}  

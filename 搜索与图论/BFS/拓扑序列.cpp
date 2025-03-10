// 判断是否是有向无环图-->拓扑序列
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;
int n, m; // n个节点 m条边 
int h[N], e[M], ne[M], idx; // 邻接表
int q[N]; // 用于BFS的队列 
int d[N]; // 点的入度 
 
void add(int a, int b){
	// 处理自环
	if(a == b) return; 
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;	
}

// 求解1-n的最短距离 
bool topsort(){
	int hh = 0, tt = -1;
	// 找出所有入度为0的点
	for(int i = 0; i < n; i++){
		if(!d[i]){
			q[++tt] = i;
		}
	} 
	while(hh <= tt){
		int t = q[hh++];
		for(int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			d[j]--; // 删除当前点指向j的边
			if(!d[j]) q[++tt] = j;
		}
	}
	return tt == n - 1;// 判断是否所有点都入队（判断此图是不是有向无环图） 
}

int main(void){
	cin >> n >> m;
	memset(h, -1, sizeof(h));
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b]++; // b的入度+1 
	}
	if(topsort()) {
		cout << "Yes" << endl;
		for(int i = 0; i < n; i++){
			printf("%d ", q[i]);
		} 
	}
	else cout << "No" << endl;
	return 0;
}  

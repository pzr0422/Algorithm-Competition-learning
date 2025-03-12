// SPFA判断负权回路
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int dist[N], cnt[N]; // 计算当前更新的节点经过了多少条边 
bool st[N]; // 存储当前节点是否在队列中，避免更新重复的点 
int n, m;
// 采用邻接表存储
int h[N], e[N], w[N], ne[N], idx;

void add(int a, int b, int c){
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
}

int spfa(){
	// 将所有点入队
	// 所有点所经过的最短路径综合起来才能找到负权回路 
	queue<int> q;
	for(int i = 1; i <= n; i++){
		q.push(i);
		st[i] = true;
	}
	
	while(q.size()){
		int t = q.front();
		q.pop();
		st[t] = false;
		for(int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			if(dist[j] > dist[t] + w[i]){
				dist[j] = dist[t] + w[i];
				
				cnt[j] = cnt[t] + 1;
				if(cnt[j] == n) return true; 
				// 如果j不在队列中,入队 
				if(!st[j]){
					q.push(j);
					st[j] = true;
				}
			}
		}	
	} 
	return false;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	if(spfa()) cout << "Yes" << endl;
	else cout << "No" << endl;
} 

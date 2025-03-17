// 二分图的最大匹配数
#include <bits/stdc++.h>
using namespace std;

const int N = 510, M = 1e6 + 10;

int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N]; // 标记n2集合中匹配的对象 
bool st[N]; // 判重，防止搜索同一个点 

void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

// 研究匹配哪个对象比较合理 
bool find(int x){
	// 枚举所有相连的匹配对象
	for(int i = h[x]; i != -1; i = ne[i]){
		int j = e[i];
		// 仅考虑未被考虑过的匹配对象 
		if(!st[j]){
			st[j] = true;
			if(!match[j] || find(match[j])){
				match[j] = x;
				return true;
			}
		}
	} 
	return false;
}

int main(void){
	cin >> n1 >> n2 >> m;
	memset(h, -1, sizeof(h));
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b);
	}
	int res = 0; // 匹配的数量 
	for(int i = 0; i <= n1; i++){
		memset(st, false, sizeof(st));
		if(find(i)) res++;
	}
	cout << res << endl;
	return 0;
} 

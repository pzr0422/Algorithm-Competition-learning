// 连通块中点的数量
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n, m; // 节点个数 操作个数 
// 定义父节点数组以及计数数组  size数组中只有根节点才有意义 
int p[N], size[N]; 

// 返回节点所在集合编号 + 路径压缩优化 
int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
} 
int main(void){
	scanf("%d%d", &n, &m);
	// 初始化
	for(int i = 1; i <= n; i++){
		p[i] = i;
		size[i] = 1; // 初始状态下每个集合点的数量都是1 
	} 
	
	while(m--){
		char op[5];
		int a, b;
		scanf("%s", op);
		// 联通操作：节点连接+个数更新 
		if(op[0] == 'C'){
			scanf("%d%d", &a, &b);
			if(find(a) == find(b)) continue;
			size[find(b)] += size[find(a)]; // 更新个数 
			p[find(a)] = find(b); // a所在集合连接到b所在集合
			 
		}
		// 询问a和b是否在一个连通块中 
		else if(op[1] == '1'){
			scanf("%d%d", &a, &b);
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");
		}
		// 询问a所在连通块中节点的数量 
		else{
			scanf("%d", &a);
			printf("%d\n", size[find(a)]);
		}
	} 
	return 0;
} 

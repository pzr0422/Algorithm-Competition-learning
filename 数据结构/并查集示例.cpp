// 合并集合
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int n, m;
int p[N]; // 记录每个节点的父节点 

// 返回x的集合编号 + 路径压缩 
int find(int x){
	if(p[x] != x) p[x] = find(p[x]); // 让当前x父节点直接等于祖宗节点 
	return p[x];
}

int main(void){
	scanf("%d%d", &n, &m);
	// 初始化节点
	for(int i = 1; i <= n; i++){
		p[i] = i; // 根节点的父节点就是自己 
	} 
	// m个操作 
	while(m --){
		int a, b;
		char op[2];
		scanf("%s%d%d", op, &a, &b);
		if(op[0] == 'M') p[find(a)] = find(b);
		else {
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
} 

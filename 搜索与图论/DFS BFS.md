# DFS BFS

## 1. DFS

### 1.1 全排列

```c
// 使用DFS的思想实现全排列
#include <bits/stdc++.h>
using namespace std;

const int N = 10; // 最多10个数进行全排列(0-9)

int n; // 题目中输入的数的个数 
int path[N]; // 当前搜索路径
int visited[N]; // 判断当前节点是否被遍历过
 
void dfs(int u){	
	// 搜索结束条件
	if(u == n){
		// 打印路径
		for(int i = 0; i < n; i++) printf("%d ", path[i]);
		printf("\n");
		return;
	} 
	// 体现字典序 
	for(int i = 1; i <= n; i++){
		// 未被访问过的节点才能被用于搜索 
		if(!visited[i]){
			path[u] = i;
			visited[i] = 1;
			dfs(u + 1); // 递归调用
			// 从这个节点往下的所有路径都被搜索完，回溯到这一层
			// 恢复原先状态
			visited[i] = 0; 
		}
	}
}

int main(void){
	scanf("%d", &n);
	dfs(0); // 搜索路径 
	return 0;
} 
```


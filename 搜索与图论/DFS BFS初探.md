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

### 1.2 n皇后问题

```c
// n-皇后问题
#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int n; // 表示要放几个皇后，以及是几*几的棋盘
int square[N][N]; // 表示棋盘当前情况
 
// 判断操作，判断当前皇后的位置是否可行
bool judge(int u, int col){
	for(int i = 0; i < u; i++){
		for(int j = 0; j < n; j++){
			// 当前皇后位置 
			if(square[i][j] == 1){
				if(col == j || abs(u - i) == abs(col - j)) return false;
			}
		}
	}
	return true;
} 

// u表示遍历到第几行 
void dfs(int u){
	// 结束条件
	if(u == n){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(square[i][j] == 1) printf("Q");
				else printf(".");
			}
			printf("\n");
		}
		printf("\n"); 
		return;
	} 
	
	for(int i = 0; i < n; i++){
		if(judge(u, i)){
			square[u][i] = 1;
			dfs(u + 1);
			square[u][i] = 0;
		}
	}
	return;
}
int main(void){
	scanf("%d", &n);
	dfs(0); // 开始搜索 
	return 0;
} 
```

## 2. BFS

### 2.1 迷宫（边权值相等的最短路问题）

![image-20250310131314633](C:\Users\潘zr\AppData\Roaming\Typora\typora-user-images\image-20250310131314633.png)

```c
// 迷宫
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII; // 用于表示点的坐标 

const int N = 10;

int n, m;
int g[N][N];
int d[N][N]; // 表示距离，-1代表没被搜索到 
PII q[N * N]
int BFS(){
	int hh = 0, tt = 0; // 定义队列的头和尾 
	q[0] = {0, 0};
	d[0][0] = 0; // 表示左上角第一个点已经走过,距离为0
	memset(d, -1, sizeof(d)); 
	
	// 向四个方向走的小技巧-->定义向量
	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
	
	// 只要队列里面有元素 
	while(hh <= tt){
		auto t = q[hh++];		
		// 尝试往四个方向走
		for(int i = 0; i < 4; i++){
			int x = t.first + dx[i], y = t.second + dy[i];
			if(x >= 0 && x < n && y >= 0 && y < m && g[x][y] == 0 && d[x][y] == -1){
				d[x][y] = d[t.first][t.second] + 1;
				q[++tt] = {x, y};
			}
		} 
	}  
	 
	return d[n - 1][m - 1];
}

int main(void){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> g[i][j];
		}
	}
	cout << BFS() << endl;
	return 0;
} 
```


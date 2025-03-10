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

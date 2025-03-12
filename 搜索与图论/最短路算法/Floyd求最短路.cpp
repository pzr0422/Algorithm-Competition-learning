// Floyd求最短路
#include <bits/stdc++.h>
using namespace std;

const int N = 210;
const int INF = 1e9; // 邻接矩阵可用此数初始化为无穷大 

int n, m, Q;
int d[N][N]; // 邻接矩阵 

void floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}

int main(void){
	cin >> n >> m >> Q;
	// 初始化邻接矩阵 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j) d[i][j] = 0;
			else d[i][j] = INF;
		}
	}
	while(m--){
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		d[a][b] = min(d[a][b], w); // 如果有重边，那么保留最小边即可 
	}
	while(Q--){
		int a, b;
		scanf("%d%d", &a, &b);
		if(d[a][b] > INF / 2) puts("impossible");
		else cout << d[a][b] << endl;
	}
	return 0;
} 

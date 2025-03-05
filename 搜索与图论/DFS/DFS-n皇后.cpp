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

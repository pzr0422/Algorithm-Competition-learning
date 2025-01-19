// 差分2（注意insert模板直接构造差分数组B）
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int a[N][N], b[N][N];

// 重点是构造差分数组（以及无关紧要的+c操作）
void insert(int x1, int y1, int x2, int y2, int c){
	b[x1][y1] += c;
	b[x2 + 1][y1] -= c;
	b[x1][y2 + 1] -= c;
	b[x1 + 1][y1 + 1] += c;
} 

int main(void){
	ios::sync_with_stdio(false);
	
	int n, m, q;
	cin >> n >> m >> q;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	
	// 构造差分数组(二维)
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			insert(i, j, i, j, a[i][j]); 
		}
	}
	int x1, x2, y1, y2, c;
	while(q--){
		cin >> x1 >> y1 >> x2 >> y2 >> c;
		insert(x1, y1, x2, y2, c);
	}
	
	// 复原前缀和数组(直接在b上操作)
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			b[i][j] = b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1] + b[i][j];
		}
	} 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> b[i][j];
		}
		cout << '\n';
	}
	return 0;
} 

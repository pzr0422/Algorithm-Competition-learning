// HZOJ-42 钱币问题（使用到容斥原理）
#include <bits/stdc++.h>
using namespace std;

int w[25];
int f[25][10005];

int main(void){
	int m, n;
	cin >> m >> n;
	for(int i = 1; i <= m; i++){
		cin >> w[i];
	}
	for(int i = 1; i <= m; i++){
		f[i][0] = 1;
		for(int j = 1; j <= n; j++){
			f[i][j] = f[i - 1][j];
			if(j < w[i]) continue;
			f[i][j] += f[i][j - w[i]];
			f[i][j] %= 9973;
		}
	}
	cout << f[m][n] << endl;
	return 0;
}

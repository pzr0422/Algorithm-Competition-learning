// HZOJ-43 ����������
// �������� 
#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int f[N][N], n, d[N][N];

int main(void){
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			scanf("%d", &d[i][j]);
		}
	}
	for(int i = 1; i <= n; i++){
		f[n][i] = d[n][i];
	}
	// �������εĵײ������� 
	for(int i = n - 1; i >= 1; i--){
		for(int j = 1; j <= i; j++){
			f[i][j] = max(f[i + 1][j], f[i + 1][j + 1]) + d[i][j];
		}
	}
	printf("%d\n", f[1][1]);
	return 0;
} 

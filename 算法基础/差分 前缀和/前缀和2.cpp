// ǰ׺��2����ά���Ӿ���ĺͣ�
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int arr[N][N];
int S[N][N];
int main(void){
	int n, m; // ������
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> arr[i][j];
		}
	} 
	
	// ά����άǰ׺�;���
	S[0][0] = 0;
	S[0][1] = 0;
	S[1][0] = 0;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + a[i][j];
		}
	} 
	// �������������������(x1, y1)(x2, y2)���������Χ�ڵľ������ 
	int x1, x2, y1, y2;
	int ans = S[x2][y2] - S[x2][y1 - 1] - S[x1 - 1][y2] + S[x1 - 1][y1 - 1];
	
	return 0;
} 
 

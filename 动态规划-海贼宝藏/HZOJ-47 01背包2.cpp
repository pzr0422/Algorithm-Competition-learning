// HZOJ-47 01����2
// �����ݳ�ԭ�� 
#include <bits/stdc++.h>
using namespace std;
const int N = 105;
const int V_max = 10005;

int w[N], val[N];
int V, n; // ������������Ʒ�� 
int dp[N][V_max]; // ������ -- dp(i, j)������i����Ʒ����������Ϊj��ʱ�������ֵ 
 
int main(void){
	cin >> V >> n;
	for(int i = 1; i <= n; i++){
		scanf("%d%d", &w[i], &val[i]);
	}
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= V; j++){
			dp[i][j] = dp[i - 1][j];
			if(j < w[i]) continue; // ��ǰ����С����Ʒ����
			dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + val[i]); 
		}
	}
	cout << dp[n][V] << endl;
	return 0;
}

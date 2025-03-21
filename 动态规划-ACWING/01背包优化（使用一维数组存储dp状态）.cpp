// 01�����Ż���ʹ��һά����洢dp״̬��
#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int n, m;
int v[N], w[N]; // ����ͼ�ֵ 
int dp[N]; // �洢���ս�� 

int main(void){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) scanf("%d%d", v[i], w[i]);
	
	// DP����
	for(int i = 1; i <= n; i++){
		for(int j = m; j >= v[i]; j--){
			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
		}
	} 
	cout << dp[m] << endl;
	return 0;
}
  

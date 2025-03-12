// Floyd�����·
#include <bits/stdc++.h>
using namespace std;

const int N = 210;
const int INF = 1e9; // �ڽӾ�����ô�����ʼ��Ϊ����� 

int n, m, Q;
int d[N][N]; // �ڽӾ��� 

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
	// ��ʼ���ڽӾ��� 
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j) d[i][j] = 0;
			else d[i][j] = INF;
		}
	}
	while(m--){
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		d[a][b] = min(d[a][b], w); // ������رߣ���ô������С�߼��� 
	}
	while(Q--){
		int a, b;
		scanf("%d%d", &a, &b);
		if(d[a][b] > INF / 2) puts("impossible");
		else cout << d[a][b] << endl;
	}
	return 0;
} 

// �Թ�
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII; // ���ڱ�ʾ������� 

const int N = 10;

int n, m;
int g[N][N];
int d[N][N]; // ��ʾ���룬-1����û�������� 
PII q[N * N]
int BFS(){
	int hh = 0, tt = 0; // ������е�ͷ��β 
	q[0] = {0, 0};
	d[0][0] = 0; // ��ʾ���Ͻǵ�һ�����Ѿ��߹�,����Ϊ0
	memset(d, -1, sizeof(d)); 
	
	// ���ĸ������ߵ�С����-->��������
	int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
	
	// ֻҪ����������Ԫ�� 
	while(hh <= tt){
		auto t = q[hh++];		
		// �������ĸ�������
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

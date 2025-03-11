// Dijkstra�㷨
#include <bits/stdc++.h>
using namespace std;

const int N = 510; // �ڵ���� 

int n, m;
int g[N][N]; // �ڽӾ���,�洢����֮��ľ��� 
int dist[N]; // ��ǰ��̾���
bool st[N]; // ��ǰ������·��û��ȷ�� 

int dijkstra(){
	// ��ʼ������Ϊ������
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0; // Դ�ڵ�ľ����ʼ��Ϊ0
	// ����������ÿ�μ���һ���㣩 
	for(int i = 0; i < n; i++){
		// t:����s�еľ�����̵ĵ�
		int t = -1;
		for(int j = 1; j <= n; j++){
			// �������ǰ��û�б�ȷ����̾���and����ȵ�ǰ����̣��Ͱѵ�ǰ��j��ֵ��t 
			if(!st[j] && (t == -1 || dist[j] < dist[t])) t = j;
		}
		if(t == n) break; // �Ż�Ч�� 
		// ��ǵ�ǰ��
		st[t] = true; 
		// ����t������̾���
		for(int j = 1; j <= n; j++){
			dist[j] = min(dist[j], dist[t] + g[t][j]);
		} 
	}
	// ������ܵ���Ŀ��ڵ�
	if(dist[n] == 0x3f3f3f3f) return -1;
	else return dist[n];
}

int main(void){
	cin >> n >> m; 
	memset(g, 0x3f, sizeof(g)); // ���ڽӾ����е�ֵ��ʼ��Ϊ���ֵ�����ڸ��¾��룩 
	
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = min(g[a][b], c); // �����ر������ȡ��Щ����ֵ��С�ı� 
	} 
	
	int t = dijkstra();
	cout << t << endl;
	return 0;
} 

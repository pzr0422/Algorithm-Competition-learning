// Prim�㷨����С������
#include <bits/stdc++.h>
using namespace std;

// ������Ŀ������Χ�����ͱߵ�����
const int N = 510;
const int M = 1e5 + 10;
// ����������
const int INF = 0x3f3f3f3f; 

// ����ͼ���ڽӾ���洢
int g[N][N];
int dist[N]; // ���ڴ洢��ǰ�㵽���ϵľ���
bool st[N]; // ��ǵ�ǰ���Ƿ��ڼ����� 
int n, m; 
 
int prim(){
	memset(dist, 0x3f, sizeof(dist));
	int res = 0; // ���ڴ洢��С���������бߵ�Ȩֵ֮��
	// ѭ��n�δ�������С�������ļ����м���n����
	for(int i = 0; i < n; i++){
		int t = -1; // �������ѭ���о��뼯������ĵ�
		// �������е� 
		for(int j = 1; j <= n; j++){
			if(!st[j] && (t == -1 || dist[j] < dist[t])) t = j;
		} 
		if(i && dist[t] == INF) return INF; // ������ͨ 
		if(i) res += dist[t]; // �ۼӽ�� 
		// ���¾���
		for(int j = 1; j <= n; j++){
			dist[j] = min(dist[j], g[t][j]);
		} 
		st[t] = true;
	} 
	return res;
} 
 

int main(void){
	// ��ʼ���ڽӾ���
	memset(g, 0x3f, sizeof(g)); 
	cin >> n >> m;
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		g[a][b] = min(g[a][b], c);
		g[b][a] = min(g[b][a], c);
	}
	
	int t = prim();
	if(t == INF) cout << "impossible" << endl;
	else cout << t << endl;
	return 0;
} 

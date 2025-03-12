// �б������Ƶ����·
#include <bits/stdc++.h>
using namespace std;

const int N = 510; // �ڵ����
const int M = 1e5 + 10; // ���� 

int n, m, k; 
int dist[N];
int backup[N]; // ���ݣ��������Ʊ��� 

// Bellman-Ford�ı߿����ɽṹ��洢
struct Edge{
	int a, b, w;
}edges[M];
 
 
int bellman_ford(){
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	for(int i = 0; i < k; i++){
		// ��ǰdist���Ƹ�backup 
		memcpy(backup, dist, sizeof(dist)); // ����һ�ε����Ľ��������ÿһ����ʱ��
		for(int j = 0; j < m; j++){
			int a = edges[j].a, b = edges[j].b, w = edges[j].w;
			if(dist[b] > backup[a] + w) dist[b] = backup[a] + w; 
		}
	}
	if(dist[n] > 0x3f3f3f3f / 2) return -1;
	else return dist[n];
}

int main(void){
	cin >> n >> m >> k;
	for(int i = 0; i < m; i++){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		edges[i].a = a;
		edges[i].b = b;
		edges[i].w = c;
	}
	int t = bellman_ford();
	if(t == -1) cout << "impossible" << endl;
	else cout << t << endl;
	return 0;
} 

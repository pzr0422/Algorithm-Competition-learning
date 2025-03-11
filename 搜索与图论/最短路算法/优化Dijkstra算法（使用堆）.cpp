// �Ż�Dijkstra�㷨��ʹ�öѣ�
// �Ż�������ϡ��ͼ���ڵ������϶ࣩ 
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;

const int N = 1e6 + 10;

int n, m; // n���ڵ㣬m���� 
// ʹ���ڽӱ����洢ϡ��ͼ 
int h[N], e[N], ne[N], idx, w[N]; // w��ʾȨ�� 
int dist[N];
bool st[N];

// ���ڽӱ�����ӱ�
void add(int a, int b, int c){
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
} 

int dijkstra(){
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	
	// ά��һ���ѣ��洢�����̾��룬ͬʱ��Ҫ֪����ı�ţ�������pair STL���洢-->{���룬���}
	// С���ѣ���ס���巽ʽ��Ĭ���Ǵ���ѣ� 
	priority_queue<PII, vector<PII>, greater<PII>> heap;
	heap.push({0, 1});
	while(heap.size()){
		auto t = heap.top(); // �ҳ���̾���ĵ㣨�����˱��������Ӷ�Ϊlogn��
		heap.pop();
		
		int ver = t.second; // ��ı��
		int dis = t.first; // �����̾���
		if(st[ver]) continue; // �ر������ֱ�Ӳ��������� 
		
		// ��ǵ�ǰ��
		st[ver] = true;
		
		// ���Ը���������ľ��� 
		for(int i = h[ver]; i != -1; i = ne[i]){
			int j = e[i];
			if(dist[j] > dis + w[i]){
				dist[j] = dis + w[i];
				// ���Ѿ�ȷ����̾����j��ѹ����� 
				heap.push({dist[j], j});
			}
		}
	}
	
	if(dist[n] == 0x3f3f3f3f) return -1;
	else return dist[n];
}

int main(void){
	scanf("%d%d", &n, &m);
	// ��ʼ���ڽӱ�
	memset(h, -1, sizeof(h)); 
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	int t = dijkstra();
	cout << t << endl;
	
	return 0;
} 

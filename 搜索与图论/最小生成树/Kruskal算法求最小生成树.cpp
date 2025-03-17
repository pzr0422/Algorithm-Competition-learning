// Kruskal�㷨����С������
#include <bits/stdc++.h>
using namespace std;

// ϡ��ͼ 
const int N = 1e5 + 10;
const int M = 2e5 + 10;

int n, m;
struct Edge{
	int a, b, w;
	// ���������
	bool operator< (const Edge &W)const{
		return w < W.w;
	} 
}edges[M];

int p[N]; // ���鼯�����ڱ�ʾ���ڵ������ 

int find(int x){
	if(p[x] != x) p[x] = find(p[x]); // ·��ѹ�� 
	return p[x];
}
int main(void){
	cin >> n >> m;
	// ��ʼ���� 
	for(int i = 0; i < m; i++){
		int a, b, w;
		scanf("%d%d%d", &a, &b, &w);
		edges[i].a = a;
		edges[i].b = b;
		edges[i].w = w;
	}
	
	// Kruskal�㷨
	sort(edges, edges + m); // ���ߵ�Ȩֵ��С����
	
	for(int i = 1; i <= n; i++) p[i] = i; // ��ʼ�����鼯
	
	int res = 0; // ��С��������Ȩֵ֮�� 
	int cnt = 0; // ��ǰ��С���������ж������� 
	// ����ÿ���� 
	for(int i = 0; i < m; i++){
		int a = edges[i].a, b = edges[i].b, w = edges[i].w;
		a = find(a);
		b = find(b);
		// ��������㲻��ͨ�������
		if(a != b){
			res += w;
			cnt++;
			p[b] = a;
		} 
	} 
	// ����ͨ 
	if(cnt < n - 1) puts("impossible");
	else cout << res << endl;
	return 0;
} 

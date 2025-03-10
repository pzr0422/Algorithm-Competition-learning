// ����ͼ��DFS
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * N;

int n, m;
int h[N], e[M], ne[M], idx;
int vis[N];

// ����ߵĲ��� 
void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 


// DFS
void DFS(int u){
	// ��ǵ�ǰ�����u�Ѿ���������
	vis[u] = 1; 
	// Ѱ������ڵ���Է��ʵĵ�p(vis)
	for(int i = h[u]; i != -1; i = ne[i]){
		int node = e[i];
		// ���û�б����ʹ�,�������� 
		if(!vis[node]) DFS(node);
	}
}

int main(void){
	memset(h, -1, sizeof(h));
	DFS(1); // �ӽڵ�1��ʼ���� 
	return 0;
} 

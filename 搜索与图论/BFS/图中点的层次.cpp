// ͼ�е�Ĳ��
// �����ڽӱ����洢ͼ 
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;
int n, m; // n���ڵ� m���� 
int h[N], e[M], ne[M], idx; // �ڽӱ�
int q[N]; // ����BFS�Ķ��� 
int d[N]; // ���ڼ�¼���·�ľ��� 
 
void add(int a, int b){
	// �����Ի�
	if(a == b) return; 
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
	// �ر�or�Ի�	
}

// ���1-n����̾��� 
int BFS(){
	int hh = 0, tt = 0;
	memset(d, -1, sizeof(d));
	q[0] = 1; // �����зŵ��ǽڵ�ı��
	d[1] = 0;
	while(hh <= tt && q[hh] != n){
		// ��ͷ���� 
		int node = q[hh++];
		for(int i = h[node]; i != -1; i = ne[i]){
			// ��Ӳ��޸ľ���
			// δ���������ĵ� 
			if(d[e[i]] == -1){
				q[++tt] = e[i];
				d[e[i]] = d[node] + 1;
			}
			
		}
	} 
	return d[n];
}

int main(void){
	cin >> n >> m;
	memset(h, -1, sizeof(h));
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		add(a, b);
	}
	cout << BFS() << endl;
	return 0;
} 

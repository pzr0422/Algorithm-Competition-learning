// ��������
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;

int n;
int h[N], e[M], ne[M], idx;
int vis[N];
int ans = N;

// ����ߵĲ��� 
void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 


// DFS�ݹ鷽����������uΪ���������Ľڵ����� 
int DFS(int u){
	// ��ǵ�ǰ�����u�Ѿ���������
	vis[u] = 1; 
	
	int sum = 1, res = 0; // resΪ��� sumΪu�����������Ľڵ�����֮��+1(u����) 
	
	// Ѱ������ڵ���Է��ʵĵ�p(vis)
	for(int i = h[u]; i != -1; i = ne[i]){
		int node = e[i];
		// ���û�б����ʹ�,�������� 
		if(!vis[node]) {
			int s = DFS(node);
			res = max(s, res);
			sum += s;
		}
	}
	res = max(res, n - sum);
	ans = min(ans, res); 
	return sum;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n;
	for(int i = 0; i < n - 1; i++){
		int a, b;
		cin >> a >> b;
		// ����ͼ 
		add(a, b);
		add(b, a);
	}
	DFS(1);
	cout << ans << endl;
	return 0;
}  

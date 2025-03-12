// SPFA�����·
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int dist[N];
bool st[N]; // �洢��ǰ�ڵ��Ƿ��ڶ����У���������ظ��ĵ� 
int n, m;
// �����ڽӱ�洢
int h[N], e[N], w[N], ne[N], idx;

void add(int a, int b, int c){
	e[idx] = b;
	w[idx] = c;
	ne[idx] = h[a];
	h[a] = idx++;
}

int spfa(){
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 0;
	
	// ����洢�ɸ�����̾���ĵ�Ķ���
	queue<int> q;
	q.push(1);
	st[1] = true;
	
	while(q.size()){
		int t = q.front();
		q.pop();
		st[t] = false;
		for(int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			if(dist[j] > dist[t] + w[i]){
				dist[j] = dist[t] + w[i];
				// ���j���ڶ�����,��� 
				if(!st[j]){
					q.push(j);
					st[j] = true;
				}
			}
		}	
	} 
	if(dist[n] == 0x3f3f3f3f) return -1;
	else return dist[n];
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	int t = spfa();
	if(t == -1) cout << "impossible" << endl;
	else cout << t << endl;
	return 0;
} 

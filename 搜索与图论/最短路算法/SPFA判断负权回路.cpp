// SPFA�жϸ�Ȩ��·
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int dist[N], cnt[N]; // ���㵱ǰ���µĽڵ㾭���˶������� 
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
	// �����е����
	// ���е������������·���ۺ����������ҵ���Ȩ��· 
	queue<int> q;
	for(int i = 1; i <= n; i++){
		q.push(i);
		st[i] = true;
	}
	
	while(q.size()){
		int t = q.front();
		q.pop();
		st[t] = false;
		for(int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			if(dist[j] > dist[t] + w[i]){
				dist[j] = dist[t] + w[i];
				
				cnt[j] = cnt[t] + 1;
				if(cnt[j] == n) return true; 
				// ���j���ڶ�����,��� 
				if(!st[j]){
					q.push(j);
					st[j] = true;
				}
			}
		}	
	} 
	return false;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--){
		int a, b, c;
		scanf("%d%d%d", &a, &b, &c);
		add(a, b, c);
	}
	if(spfa()) cout << "Yes" << endl;
	else cout << "No" << endl;
} 

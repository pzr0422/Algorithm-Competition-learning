// �ж��Ƿ��������޻�ͼ-->��������
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int M = N * 2;
int n, m; // n���ڵ� m���� 
int h[N], e[M], ne[M], idx; // �ڽӱ�
int q[N]; // ����BFS�Ķ��� 
int d[N]; // ������ 
 
void add(int a, int b){
	// �����Ի�
	if(a == b) return; 
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;	
}

// ���1-n����̾��� 
bool topsort(){
	int hh = 0, tt = -1;
	// �ҳ��������Ϊ0�ĵ�
	for(int i = 0; i < n; i++){
		if(!d[i]){
			q[++tt] = i;
		}
	} 
	while(hh <= tt){
		int t = q[hh++];
		for(int i = h[t]; i != -1; i = ne[i]){
			int j = e[i];
			d[j]--; // ɾ����ǰ��ָ��j�ı�
			if(!d[j]) q[++tt] = j;
		}
	}
	return tt == n - 1;// �ж��Ƿ����е㶼��ӣ��жϴ�ͼ�ǲ��������޻�ͼ�� 
}

int main(void){
	cin >> n >> m;
	memset(h, -1, sizeof(h));
	for(int i = 0; i < m; i++){
		int a, b;
		cin >> a >> b;
		add(a, b);
		d[b]++; // b�����+1 
	}
	if(topsort()) {
		cout << "Yes" << endl;
		for(int i = 0; i < n; i++){
			printf("%d ", q[i]);
		} 
	}
	else cout << "No" << endl;
	return 0;
}  

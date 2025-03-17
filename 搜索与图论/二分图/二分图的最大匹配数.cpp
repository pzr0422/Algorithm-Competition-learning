// ����ͼ�����ƥ����
#include <bits/stdc++.h>
using namespace std;

const int N = 510, M = 1e6 + 10;

int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N]; // ���n2������ƥ��Ķ��� 
bool st[N]; // ���أ���ֹ����ͬһ���� 

void add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
}

// �о�ƥ���ĸ�����ȽϺ��� 
bool find(int x){
	// ö������������ƥ�����
	for(int i = h[x]; i != -1; i = ne[i]){
		int j = e[i];
		// ������δ�����ǹ���ƥ����� 
		if(!st[j]){
			st[j] = true;
			if(!match[j] || find(match[j])){
				match[j] = x;
				return true;
			}
		}
	} 
	return false;
}

int main(void){
	cin >> n1 >> n2 >> m;
	memset(h, -1, sizeof(h));
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b);
	}
	int res = 0; // ƥ������� 
	for(int i = 0; i <= n1; i++){
		memset(st, false, sizeof(st));
		if(find(i)) res++;
	}
	cout << res << endl;
	return 0;
} 

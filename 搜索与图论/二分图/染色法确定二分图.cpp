// Ⱦɫ��ȷ������ͼ
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 2e5 + 10; // ����ͼ

// ʹ���ڽӱ����洢
int h[N], e[M], ne[M], idx;
int color[N]; // ��ʾÿ���㱻Ⱦ��ʲô��ɫ(0û��Ⱦɫ 1,2Ϊ������ɫ)

int add(int a, int b){
	e[idx] = b;
	ne[idx] = h[a];
	h[a] = idx++;
} 

int n, m;

bool dfs(int u, int c){
	color[u] = c;
	for(int i = h[u]; i != -1; i = ne[i]){
		int j = e[i];
		if(!color[j]){
			if(!dfs(j, 3 - c)) return false;
		} 
		else{
			if(color[j] == c) return false;
		}
	}
	return true;
}

int main(void){
	memset(h, -1, sizeof(h));
	cin >> n >> m;
	while(m--){
		int a, b;
		scanf("%d%d", &a, &b);
		add(a, b);
		add(b, a);
	}
	// ��ʼȾɫ ����ÿ���� 
	bool flag = true; // Ⱦɫ�Ƿ�ʧ�� 
	for(int i = 1; i <= n; i++){
		// ����ǰ�ڵ�δ��Ⱦɫ 
		if(!color[i]){
			if(!dfs(i, 1)) {
				flag = false;
				break;
			}
		}
	}
	if(flag) puts("Yes");
	else puts("No"); 
	return 0;
} 

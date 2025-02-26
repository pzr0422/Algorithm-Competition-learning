// �ϲ�����
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int n, m;
int p[N]; // ��¼ÿ���ڵ�ĸ��ڵ� 

// ����x�ļ��ϱ�� + ·��ѹ�� 
int find(int x){
	if(p[x] != x) p[x] = find(p[x]); // �õ�ǰx���ڵ�ֱ�ӵ������ڽڵ� 
	return p[x];
}

int main(void){
	scanf("%d%d", &n, &m);
	// ��ʼ���ڵ�
	for(int i = 1; i <= n; i++){
		p[i] = i; // ���ڵ�ĸ��ڵ�����Լ� 
	} 
	// m������ 
	while(m --){
		int a, b;
		char op[2];
		scanf("%s%d%d", op, &a, &b);
		if(op[0] == 'M') p[find(a)] = find(b);
		else {
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");
		}
	}
	return 0;
} 

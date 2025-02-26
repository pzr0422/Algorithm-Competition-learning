// ��ͨ���е������
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n, m; // �ڵ���� �������� 
// ���常�ڵ������Լ���������  size������ֻ�и��ڵ�������� 
int p[N], size[N]; 

// ���ؽڵ����ڼ��ϱ�� + ·��ѹ���Ż� 
int find(int x){
	if(p[x] != x) p[x] = find(p[x]);
	return p[x];
} 
int main(void){
	scanf("%d%d", &n, &m);
	// ��ʼ��
	for(int i = 1; i <= n; i++){
		p[i] = i;
		size[i] = 1; // ��ʼ״̬��ÿ�����ϵ����������1 
	} 
	
	while(m--){
		char op[5];
		int a, b;
		scanf("%s", op);
		// ��ͨ�������ڵ�����+�������� 
		if(op[0] == 'C'){
			scanf("%d%d", &a, &b);
			if(find(a) == find(b)) continue;
			size[find(b)] += size[find(a)]; // ���¸��� 
			p[find(a)] = find(b); // a���ڼ������ӵ�b���ڼ���
			 
		}
		// ѯ��a��b�Ƿ���һ����ͨ���� 
		else if(op[1] == '1'){
			scanf("%d%d", &a, &b);
			if(find(a) == find(b)) printf("Yes\n");
			else printf("No\n");
		}
		// ѯ��a������ͨ���нڵ������ 
		else{
			scanf("%d", &a);
			printf("%d\n", size[find(a)]);
		}
	} 
	return 0;
} 

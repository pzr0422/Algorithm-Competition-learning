// ʹ��DFS��˼��ʵ��ȫ����
#include <bits/stdc++.h>
using namespace std;

const int N = 10; // ���10��������ȫ����(0-9)

int n; // ��Ŀ����������ĸ��� 
int path[N]; // ��ǰ����·��
int visited[N]; // �жϵ�ǰ�ڵ��Ƿ񱻱�����
 
void dfs(int u){	
	// ������������
	if(u == n){
		// ��ӡ·��
		for(int i = 0; i < n; i++) printf("%d ", path[i]);
		printf("\n");
		return;
	} 
	// �����ֵ��� 
	for(int i = 1; i <= n; i++){
		// δ�����ʹ��Ľڵ���ܱ��������� 
		if(!visited[i]){
			path[u] = i;
			visited[i] = 1;
			dfs(u + 1); // �ݹ����
			// ������ڵ����µ�����·�����������꣬���ݵ���һ��
			// �ָ�ԭ��״̬
			visited[i] = 0; 
		}
	}
}

int main(void){
	scanf("%d", &n);
	dfs(0); // ����·�� 
	return 0;
} 

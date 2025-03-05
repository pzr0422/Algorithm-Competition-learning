// n-�ʺ�����
#include <bits/stdc++.h>
using namespace std;

const int N = 10;
int n; // ��ʾҪ�ż����ʺ��Լ��Ǽ�*��������
int square[N][N]; // ��ʾ���̵�ǰ���
 
// �жϲ������жϵ�ǰ�ʺ��λ���Ƿ����
bool judge(int u, int col){
	for(int i = 0; i < u; i++){
		for(int j = 0; j < n; j++){
			// ��ǰ�ʺ�λ�� 
			if(square[i][j] == 1){
				if(col == j || abs(u - i) == abs(col - j)) return false;
			}
		}
	}
	return true;
} 

// u��ʾ�������ڼ��� 
void dfs(int u){
	// ��������
	if(u == n){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(square[i][j] == 1) printf("Q");
				else printf(".");
			}
			printf("\n");
		}
		printf("\n"); 
		return;
	} 
	
	for(int i = 0; i < n; i++){
		if(judge(u, i)){
			square[u][i] = 1;
			dfs(u + 1);
			square[u][i] = 0;
		}
	}
	return;
}
int main(void){
	scanf("%d", &n);
	dfs(0); // ��ʼ���� 
	return 0;
} 

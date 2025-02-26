// Trie�ַ���ͳ��
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// ÿ���ڵ���ӽڵ㣬�Ե�ǰ�ڵ�Ϊ��β�ĵ��ʵĸ�������ǰʹ�õĽڵ��±� 
// �±�Ϊ0�ĵ㣬���Ǹ��ڵ����ǿսڵ� 
// �˴���26�������ַ��ĸ�����һ����Ŀ�л������ַ��ĸ��� 
int son[N][26], cnt[N], idx;
char str[N];

// �������
void insert(char str[]){
	int p = 0; // pָ��ָ����ڵ� 
	for(int i = 0; str[i]; i++){
		int u = str[i] - 'a';
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u]; // ָ��ǰ�ڵ� 
	}
	// ����
	cnt[p]++; 
} 

// ��ѯ����
int query(char str[]){
	int p = 0;
	for(int i = 0; str[i]; i++){
		int u = str[i] - 'a';
		if(!son[p][u]) return 0;
		p = son[p][u];
	}
	return cnt[p];
} 

int main(void){
	int n;
	scanf("%d", &n);
	char op[2];
	while(n--){
		scanf("%s%s", op, str);
		if(op[0] == 'I') insert(str);
		else printf("%d\n", query(str));
	}
	return 0;
} 

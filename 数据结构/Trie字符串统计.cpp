// Trie字符串统计
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// 每个节点的子节点，以当前节点为结尾的单词的个数，当前使用的节点下标 
// 下标为0的点，既是根节点又是空节点 
// 此处的26代表着字符的个数，一般题目中会限制字符的个数 
int son[N][26], cnt[N], idx;
char str[N];

// 插入操作
void insert(char str[]){
	int p = 0; // p指针指向根节点 
	for(int i = 0; str[i]; i++){
		int u = str[i] - 'a';
		if(!son[p][u]) son[p][u] = ++idx;
		p = son[p][u]; // 指向当前节点 
	}
	// 计数
	cnt[p]++; 
} 

// 查询操作
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

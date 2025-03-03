// 哈希表拉链法示例
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 3;

int h[N], e[N], ne[N], idx, n; // 这里的h[N]均为头指针，本身不包含任何元素 

void insert(int x){
	// 先求哈希值k
	int k = (x % N + N) % N; // +N保证结果为正数
	// 插入对应的链表处
	e[idx] = x;
	ne[idx] = h[k];
	h[k] = idx++; 
}

bool find(int x){
	int k = (x % N + N) % N;
	int p = h[k];
	while(p != -1){
		if(e[p] == x) return true;
		p = ne[p];
	}
	return false;
}
int main(void){
	// 先求>元素个数的最小质数,用于哈希函数中的模，这里是100003
	
	scanf("%d", &n); // 操作个数 
	// 初始化所有元素为-1（链表空节点表示为-1） 
	memset(h, -1, sizeof(h));
	
	while(n--){
		char op[2];
		int x;
		scanf("%s%d", op, &x);
		// 插入操作 
		if(op[0] == 'I'){
			insert(x);
		}
		// 查询操作
		else{
			if(find(x)) puts("Yes");
			else puts("No");
		} 
	}
	
} 

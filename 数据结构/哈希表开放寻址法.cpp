// 哈希表开放寻址法
#include <bits/stdc++.h>
using namespace std;

// 数组大小要开到题目要求的2~3倍，也要求是质数 
const int N = 2e6 + 3, null = 0x3f3f3f3f; // 规定一个null值，若哈希表的一个位置等于这个值，表示哈希表此处为空，可以存储 

int h[N];

// 核心：find操作 --> 如果要找的数在哈希表中，返回这个数所在的位置；如果不在，那么返回应该存储的位置 
int find(int x){
	// 计算哈希值
	int k = (x % N + N) % N;
	
	while(h[k] != null && h[k] != x){
		k++;
		if(k == N) k = 0; // 若移动到哈希数组的尾端依旧被占用，则转移到开头继续寻找 
	}
	
	return k;
}

int main(void){
	memset(h, 0x3f, sizeof(h)); // 注意memset设置的单位是字节 
	int n;
	scanf("%d", &n);
	while(n--){
		char op[2];
		int x;
		scanf("%s%d", op, &x);
		int idx = find(x);
		// 插入操作 
		if(op[0] == 'I'){
			h[idx] = x;
		}
		// 查询操作
		else{
			if(h[idx] == null) puts("No");
			else puts("Yes");
		} 
	}
	return 0;
} 

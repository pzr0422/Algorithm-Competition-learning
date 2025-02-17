// 单链表例题示例（使用双数组逻辑上模拟链表）
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
// head->头指针
// idx->当前使用下标
// e[N]->存储节点值
// ne[N]->当前节点下一个节点的下标 
int e[N], ne[N], idx, head;

// 初始化链表
void init(){
	head = -1; // 头节点指向空
	idx = 0; // 当前使用下标为0 
} 

// 向链表头插入一个数 
void insert_head(int x){
	e[idx] = x;
	ne[idx] = head;
	head = idx++;
} 

// 删除第k个插入的数后面的数(第k个插入的数就是e[k - 1]) 
void delete(int k){
	// 删除头节点的情况 
	if(!k) head = ne[head];
	else ne[k - 1] = ne[ne[k - 1]];
} 

// 在第k个插入的数后插入一个数
void insert_k(int k, int x){
	e[idx] = x;
	ne[idx] = ne[k - 1];
	ne[k - 1] = idx++;
} 
int main(void){
	
	return 0;
} 

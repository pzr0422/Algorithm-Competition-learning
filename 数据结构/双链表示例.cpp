// 双链表示例 采用左指针数组l和右指针数组r来模拟逻辑
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

// 分别是当前节点值，当前节点左边的下标，当前节点右边的下标，当前正在使用的下标 
int e[N], l[N], r[N], idx;

// 初始化(0表示头节点，1表示尾结点)
void init(){
	r[0] = 1, l[1] = 0;
	idx = 2;
} 

// 插入操作(注意操作顺序：先改右边的点)
void insert(int k, int x){
	e[idx] = x;
	r[idx] = r[k];
	l[idx] = k;
	// k右边的节点 
	l[r[k]] = idx;
	// k 
	r[k] = idx;
	
} 

// 删除操作
void delete(int k){
	l[r[k]] = l[k];
	r[l[k]] = r[k];
} 
int main(void){
	
	return 0;
} 
 

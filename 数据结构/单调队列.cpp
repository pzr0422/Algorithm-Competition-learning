// 单调队列例题--滑动窗口
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int a[N], q[N]; // 题目给的序列 单调队列
int n, k; // 窗口大小为k 
int main(void){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int hh = 0, tt = -1; // 初始队列为空
	for(int i = 0; i < n; i++){
		// 判断队列头是否滑出窗口
		while(hh <= tt && i - k + 1 > q[hh]) hh++; 
		while(hh <= tt && a[q[tt]] > a[i]) tt--;
		q[++tt] = i; // 队列的值是下标
		if(i >= k - 1) printf("%d", a[q[hh]]);
	}
	return 0;
} 

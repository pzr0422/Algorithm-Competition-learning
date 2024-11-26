// 快速排序模板
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;

int n;
int q[N];

void quick_sort(int q[], int l, int r){
	// 边界条件
	if(l >= r) return;
	
	// 定义分界点 
	int x = q[l];
	//定义指针
	int i = l - 1, j = r + 1;
	 
	// 指针开始移动
	while(i < j){
		do i++; while(q[i] < x);
		do j--; while(q[j] > x);
		if(i < j) swap(q[i], q[j]);
	} 
	
	// 递归执行
	quick_sort(q, l, j);
	quick_sort(q, j + 1, r); 
}

int main(void){
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &q[i]);
	}
	
	quick_sort(q, 0, n - 1);
	
	for(int i = 0; i < n; i++){
		printf("%d ", q[i]);
	}
	return 0;
}
 

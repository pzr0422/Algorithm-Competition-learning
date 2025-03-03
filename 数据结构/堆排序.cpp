// 堆排序
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int n, m;
int h[N], size; // size代表当前堆的元素个数,可变化 

// up操作
void up(int x){
	while(x / 2 != 0 && h[x / 2] > h[x]) {
		swap(h[x], h[x / 2]);
		x /= 2;
	}
} 

// down操作
void down(int x){
	int min = x;
	if(2 * x <= size && h[2 * x] < h[min]) min = 2 * x;
	if(2 * x + 1 <= size && h[2 * x + 1] < h[min]) min = 2 * x + 1;
	// 最小值不是根节点 
	if(min != x){
		// 交换
		swap(h[x], h[min]);
		// 递归调用
		down(min); 
	}

} 
int main(void){
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++){
		scanf("%d", &h[i]);
	}
	size = n;
	
	// 建堆
	for(int i = n / 2; i > 0; i--) down(i); // 除了最下面一层，其他元素都要执行down操作，时间复杂度为O(n)
	
	while(m--){
		// 输出当前最小值
		printf("%d ", h[1]);
		// 删除当前最小值
		h[1] = h[size];
		size--;
		down(1); 
	} 
	return 0;
} 

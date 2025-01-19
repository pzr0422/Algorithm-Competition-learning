// 差分1(重点在多个询问中给出既定区间)
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
int a[N]; // 前缀和数组
int b[N]; // 差分数组 

void insert(int l, int r, int c){
	b[l] += c;
	b[r + 1] -= c;
}

int main(void){
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) cin >> a[i];
	// 构造差分数组（使用Insert模板） 
	for(int i = 1; i <= n; i++) insert(i, i, a[i]); // 等效于 b[i] = a[i] - a[i - 1];
	
	// m个查询
	int l, r, c;
	while(m--){
		cin >> l >> r >> c;
		insert(l, r, c);
	} 
	// 复原前缀和数组（直接在b上操作）
	for(int i = 1; i <= n; i++) b[i] += b[i - 1];
	
	// 打印最终结果
	for(int i = 1; i <= n; i++) cout << b[i] << ' ';
} 
/*
自己的写法 
int main(void){
	ios::sync_with_stdio(false); // 取消同步
	int n, m;
	cin >> n >> m;
	a[0] = 0; // 没必要写这一句 
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	// 构造差分数组
	for(int i = 1; i <= n; i++){
		b[i] = a[i] - a[i - 1];
	} 
	
	int l, r, c; // l,r是从下标1开始的 
	while(m--){
		cin >> l >> r >> c;
		b[l] += c;
		b[r + 1] -= c;
	}
	
	// 复原前缀和数组
	for(int i = 1; i <= n; i++){
		a[i] = a[i - 1] + b[i];
	} 
	
	// 打印
	for(int i = 1; i <= n; i++){
		cout << a[i] << ' ';
	} 
	return 0;
} 
*/



// 单调栈例题
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;

int stk[N], tt; // 栈数组和栈顶 下标从1开始 
int n; 

int main(void){
	ios:sync_with_stdio(false);
	cin >> n;
	int x;
	for(int i = 0; i < n; i++){
		cin >> x;
		while(tt && stk[tt] >= x) tt--; // 维护单调栈：如果栈顶元素大于当前数，则此时的栈顶元素不可能成为答案
		// 跳出循环后，此时的栈顶元素就是答案
		if(tt) cout << stk[tt] << ' ';
		else cout << - 1 << ' ';
		stk[++tt] = x;
	}
	return 0;
} 

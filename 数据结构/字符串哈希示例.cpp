// 字符串哈希
#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ULL

const int N = 1e6 + 10, P = 131;

int n, m;
char str[N];
ULL h[N], p[N]; // 数组h用来存储从1-n位的哈希值，数组p是用来处理系数的

// 子串的哈希值如何得到 
ULL get(int l, int r){
	return h[r]- h[l - 1] * p[r - l + 1];
}

int main(void){
	scanf("%d%d%s", &n, &m, str + 1);
	p[0] = 1; // P的0次方
	for(int i = 1; i <= n; i++){
		p[i] = p[i - 1] * P;
		h[i] = h[i - 1] * P + str[i];
	} 
	
	while(m--){
		int l1, r1, l2, r2;
		scanf("%d%d%d%d", &l1, &r1, &l2, &r2);
		if(get(l1, r1) == get(l2, r2)) puts("Yes");
		else puts("No");
	}
	return 0;
}

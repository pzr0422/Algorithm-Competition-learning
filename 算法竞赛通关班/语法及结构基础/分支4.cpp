// 分支4 可能的位置
#include <bits/stdc++.h>
using namespace std;

int main(void){
	int n, a, b;
	cin >> n >> a >> b;
	int d1 = n - a;
	int d2 = 1 + b;
	if(d1 < d2) cout << d1;
	else cout << d2;
	return 0;
} 

// 循环14 最大公约数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n, m;
	cin >> n >> m;
	while(n && m){
		if(n < m) m = m % n;
		else n = n % m;
	}
	cout << n + m << endl;
	return 0;
} 

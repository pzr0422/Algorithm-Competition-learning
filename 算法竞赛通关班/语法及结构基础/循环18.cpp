// 循环18 最小公倍数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int a, b;
	cin >> a >> b;
	int ans = a * b;
	while(a != 0 && b != 0){
		if(a < b) b = b % a;
		else a = a % b;
	}
	cout << ans / (a + b) << endl;
	return 0;
} 

// 分支9 买房子
#include <bits/stdc++.h>
using namespace std;
int main(void){
	long long n, k;
	cin >> n >> k;
	if(k == 0 || k == n) cout << 0 << " ";
	else cout << 1 << " ";
	if(n >= 3 * k) cout << 2 * k << endl;
	else cout << n - k << endl;
	return 0;
} 

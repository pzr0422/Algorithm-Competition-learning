// 循环嵌套11 整数解
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int m, n;
	cin >> m >> n;
	int flag = 0;
	for(int i = 1; i <= m / 2; i++){
		int temp = m - i;
		if(i * temp == n) {
			cout << "yes";
			flag = 1;
			break;
		}
	}
	if(flag == 0) cout << "no";
	return 0;
} 

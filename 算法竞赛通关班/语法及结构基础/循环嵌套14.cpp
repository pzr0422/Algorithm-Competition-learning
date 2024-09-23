// 循环嵌套14 三质数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int T;
	cin >> T;//表示有几组测试数据
	long long n;
	for(int i = 1; i <= T; i++){
		cin >> n;
		int flag = 0; 
		for(long long j = 2; j <= (long long)sqrt(n); j++){
			if(n % j == 0){
				if(j * j == n) {
					cout << "YES" << endl;
					flag = 1;
					break;
				}
				else{
					cout << "NO" << endl;
					flag = 1;
					break;
				}
			}
		}
		if(flag == 0) cout << "NO" << endl;
	} 
	return 0;
} 

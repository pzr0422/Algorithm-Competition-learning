// 循环嵌套1 分解质因数
#include <bits/stdc++.h>
using namespace std;
int main(void){
	int n;
	cin >> n;
	int i = 2;
	int flag = 0;
	while(n != 1){
		if(n % i != 0){
			i++;
			continue;
		}
		int count = 0;
		while(n % i == 0){
			count++;
			n = n / i;
		}
		if(flag) cout << '*';
		cout << i;
		if(count > 1) cout << '^' << count; 
		flag = 1;
	}
	return 0;
} 
